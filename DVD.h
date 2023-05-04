/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#ifndef DVD_H
#define DVD_H

#include<string>
#include "libaryItem.h"


class DVD: public LibaryItem{
        
private:

        string DVDTitle;
        string DVDCat;
        int  DVDTime;
        string DVDStudio;
        string DVDDate;

public:
        string GetDVDTitle();
        void SetDVDTitle(string title);

        string GetDVDCat();
        void SetDVDCat(string cat);

        int GetDVDTime();
        void SetDVDTime(int num);

        string GetDVDStudio();
        void SetDVDStudio(string studio);

        string GetDVDDate();
        void SetDVDDate(string date);
        
        void print() override;
        
        DVD(float cost, string title, string studio, string release, string cat, int runtime):LibaryItem(){
                item_status="In";
                item_cost=cost;
                DVDDate=release;
                DVDStudio=studio;
                DVDTime=runtime;
                DVDCat=cat;
                DVDTitle=title;
                DVDStudio=studio;
        }

        virtual ~DVD(){ };

};

#endif