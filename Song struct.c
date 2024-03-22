#include<stdio.h>
struct song
{
	char title[50];
	char artist[20];
	char album[50];
	char length[10];
};
int main()
{
	struct song s1={"Halamathi Habibo","Anirudh","Beast","4:15"};
	struct song s2={"Naaku Mukka","Vijay Antony","Theriyadhu","4:00"};
	printf("Title:%s\nArtist:%s\nAlbum:%s\nLength:%s\n",s1.title,s1.artist,s1.album,s1.length);
	printf("Title:%s\nArtist:%s\nAlbum:%s\nLength:%s\n",s2.title,s2.artist,s2.album,s2.length);
	return 0;
}
