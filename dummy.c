boolean quoteFlag = false;
int numCol = 1;
if(buffer[0] == ',' && quoteFlag == false){
  numCol ++;  //counts the number of header columns being read in
 }
 else if(buffer[0] == '\"' && quoteFlag == false) quoteFlag == true; //start of a quoted title
 else if(buffer[0] == '\"' && quoteFlag == true) quoteFlag == false; //end of a quoted segment used to differeniate commas



/*Breaks up the first line into the different segements for the header matrix*/

 
struc record{
  char* color[10];
  char* director_Name[15];
  int num_crit_reviews;
  int duration; //may actually be a dbl depending on how they respresent seconds
  int director_fb_likes;
  int actor_3_likes;
  char* actor_2_name[15];
  int actor_1_likes;
  double gross;
  char* genres[15];
  char* actor_1_name[15];
  char* movie_title[10];
  int posterFaces; //facenumber_in_poster
  char* plot[25]; //plot_keywords
  char* link[15]; // movie_imdb_link
  int numReviews; //num_user_for_reviews
  char* language[10];
  char* country[10];
  char* rating[5]; //content_rating
  double budget;
  int year; //title year
  int actor2Likes; //actor_2_facebook_likes
  double score; //imdb_score
  double aspect_ratio; 
  int movieLikes; //movie_facebook_likes
