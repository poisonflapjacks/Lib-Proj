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
        string DVD_studio;
        string DVD_release_date;

public:
        int GetDVDTime();
        void SetDVDTime(int num);

        string GetDVDStudio();
        void SetDVDStudio(string studio);

        string GetDVDReleaseDate();
        void SetDVDReleaseDate(string date);
        
        void print() override;
        
        DVD(float cost, string title, string studio, string release, string cat, int runtime):LibaryItem(){
                item_status="In";
                item_cost=cost;
                DVD_release_date=release;
                DVD_studio=studio;
                DVD_runtime=runtime;
                item_cat=cat;
                item_name=title;
        }

        virtual ~DVD(){ };

};
#endif