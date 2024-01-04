//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <unordered_map>
#include <fstream>

#include "Unit1.h"
#include <Unit2.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------

using namespace std;

class Customer
{
public:
    Customer()
    {
        noOfProducts = 0;
        next = NULL;
    }

    Customer(int pN)
    {
        noOfProducts = pN;
        next = NULL;
    }

    void setNext(Customer *next)
    {
        this->next = next;
    }

    Customer *getNext()
    {
        return this->next;
    }

    int getNoOfProducts()
    {
        return noOfProducts;
    }

private:
    int noOfProducts;
    Customer *next;
};

class LinkedList
{
public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insert(Customer *cus)
    {
        if (size == 0)
        {
            head = cus;
            tail = cus;
        }
        else
        {
            tail->setNext(cus);
            tail = cus;
        }
        size++;
    }

    Customer *remove()
    {
        if (size != 0)
        {
            Customer *temp = head;

            head = head->getNext();
            size--;

            return temp;
		}
		else
			return NULL;
    }

    void display()
    {
        Customer *ptr = head;

        for (int i = 0; i < size; i++)
        {
            cout << ptr->getNoOfProducts() << " ";
            ptr = ptr->getNext();
        }

        cout << endl;
    }

private:
    Customer *head, *tail;
    int size;
};

class Shop
{
public:
Shop(){}
	Shop(TForm1* form) : form(form)
    {
        l1_count = 0;
        l2_count = 0;
		l3_count = 0;
		l1_cus_count = 0;
		l2_cus_count = 0;
		l3_cus_count = 0;
        count = 0;
        i = 0;
    }

	void addCustomerInLine(Customer *cus)
	{

        if (l1_count <= l2_count && l1_count <= l3_count)
        {
            val = 'a';
			form->addCustomerLabel->Text = "Customer added to Line 1";
			System::UnicodeString temp = cus->getNoOfProducts();
			form->Line1StringGrid->Cells[0][l1_cus_count++] = temp;
			line1.insert(cus);
			l1_count += cus->getNoOfProducts();
		}
		else if (l2_count < l1_count && l2_count <= l3_count)
		{
			val = 'b';
			form->addCustomerLabel->Text = "Customer added to Line 2";
			System::UnicodeString temp = cus->getNoOfProducts();
			form->Line2StringGrid->Cells[0][l2_cus_count++] = temp;
            line2.insert(cus);
            l2_count += cus->getNoOfProducts();
        }
        else
        {
			val = 'c';
			form->addCustomerLabel->Text = "Customer added to Line 3";
			System::UnicodeString temp = cus->getNoOfProducts();
			form->Line3StringGrid->Cells[0][l3_cus_count++] = temp;
            line3.insert(cus);
            l3_count += cus->getNoOfProducts();
        }
        sequence[count++] = val;
    }

    Customer *checkOutCustomer()
    {
        if (count != 0)
        {
            val = sequence[i++];

            if (val == 'a')
            {
                cout << "Customer from line 1 is checked out." << endl;
                Customer *temp = line1.remove();
                l1_count -= temp->getNoOfProducts();
                sequence.erase(i - 1);
                count--;
                return temp;
            }
            else if (val == 'b')
            {
                cout << "Customer from line 2 is checked out." << endl;
                Customer *temp = line2.remove();
                l2_count -= temp->getNoOfProducts();
                sequence.erase(i - 1);
                count--;
                return temp;
            }
            else
            {
                cout << "Customer from line 3 is checked out." << endl;
                Customer *temp = line3.remove();
                l3_count -= temp->getNoOfProducts();
                sequence.erase(i - 1);
                count--;
                return temp;
            }
        }
    }

    void display()
    {
        cout << "Line-1:\t";
        line1.display();
        cout << "Line-2:\t";
        line2.display();
        cout << "Line-3:\t";
        line3.display();
        cout << endl;
    }

private:
    unordered_map<int, char> sequence;
    LinkedList line1, line2, line3;
    int l1_count, l2_count, l3_count, count, i, l1_cus_count, l2_cus_count, l3_cus_count;
	char val;
	TForm1* form;
};
Shop shop;
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Line1StringGrid->Cells[0][0]  = "Hello";
	Line1StringGrid->Cells[0][1]  = "Mello";
	shop = Shop(this);
}
int i = 0;
void __fastcall TForm1::AddCustomerButtonClick(TObject *Sender)
{
//	shop.addCustomerInLine(new Customer(3));
	if(i == 0)
	{
		AskingForProductsForm->Show();
        AddCustomerButton->Enabled = false;
        i++;
	}
	else
	{
		fstream myFile;
		myFile.open("customersData.txt", ios::in);
		if(myFile.is_open())
		{
			string products;

			myFile >> products;

			shop.addCustomerInLine(new Customer(stoi(products)));
		}
		i--;
    }
}
//---------------------------------------------------------------------------


