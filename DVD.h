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
        int  DVD_runtime;
        string DVDStudio;
        string DVDDate;

public:
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
                DVD_runtime=runtime;
                item_cat=cat;
                item_name=title;
                DVDStudio=studio;
        }

        virtual ~DVD(){ };

};

#endif