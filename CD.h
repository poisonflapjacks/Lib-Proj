/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#ifndef CD_H
#define CD_H

#include<string>
#include "libaryItem.h"


class CD: public LibaryItem{
private:
        string CDTitle;
        string CDArtist;
        int  CDNumTracks;
        string CDDate;
        string CDGenre;

public:
        string GetCDTitle();
        void SetCDTitle(string title);

        string GetCDArtist();
        void SetCDArtist(string artist);

        int GetCDNumTracks();
        void SetCDNumTracks(int num);

        string GetCDDate();
        void SetCDDate(string date);

        string GetCDGenre();
        void SetCDGenre(string genre);

        void print();
        
        CD(float cost, string title, string artist, int tracks, string release, string genre):LibaryItem(){
                itemCost=cost;
                CDTitle=title;
                CDArtist=artist;
                CDNumTracks=tracks;
                CDDate=release;
                CDGenre=genre;
                itemStatus="In";
        }

};
#endif