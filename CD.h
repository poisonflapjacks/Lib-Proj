#ifndef CD_H
#define CD_H

#include<string>
#include "libaryItem.h"


class CD: public LibaryItem{
private:
        string CD_artist;
        string CD_date;
        int  CD_num_tracks;
        

public:
        string GetCDArtist();
        void SetCDArtist(string artist);

        int GetCDNumTracks();
        void SetCDNumTracks(int num);

        string GetCDDate();
        void SetCDDate(string date);

        string GetCDGenre();
        void SetCDGenre(string genre);

        void print() override;
        
        CD(float cost, string title, string artist, int tracks, string release, string genre):LibaryItem(){
                item_cost=cost;
                item_name=title;
                CD_artist=artist;
                CD_num_tracks=tracks;
                CD_date=release;
                item_cat=genre;
                item_status="In";
        }

};
#endif