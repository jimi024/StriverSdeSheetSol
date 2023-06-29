int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at, at+n); //sort by AT
    sort(dt, dt+n); //sort by DT
    //here we are not using pair because we don't need to know which AT is paired with which DT, we just need to know the count of platforms

    int curr_platform_count = 1, final_platform_count = 1; 
    int curr_at = 1, last_dt = 0; 

    while(curr_at < n and last_dt < n){
        if(at[curr_at] <= dt[last_dt]){ //platform is not available
            curr_platform_count++;
            curr_at++;
        }
        else {  //platform is available
            curr_platform_count--;
            last_dt++;
        }
        final_platform_count = max(final_platform_count, curr_platform_count); //update final count
    }
    
    return final_platform_count;
}