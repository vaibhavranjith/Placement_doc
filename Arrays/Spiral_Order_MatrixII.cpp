void MR(int &r,int &c,vector<vector<int>> &sp,int &val){
    while(c<sp.size() and sp[r][c]==0){
        sp[r][c]=val;
        c++;
        val++;
    }
    c--;
    r++;
    return;
}
void MD(int &r,int &c,vector<vector<int>> &sp,int &val){
    while(r<sp.size() and sp[r][c]==0){
        sp[r][c]=val;
        r++;
        val++;
    }
    r--;
    c--;
    return;
}

void ML(int &r,int &c,vector<vector<int>> &sp,int &val){
    while(c>=0 and sp[r][c]==0){
        sp[r][c]=val;
        c--;
        val++;
    }
    c++;
    r--;
    return;
    
}

void MU(int &r,int &c,vector<vector<int>> &sp,int &val){
    while(r>=0 and sp[r][c]==0){
        sp[r][c]=val;
        r--;
        val++;
    }
    r++;
    c++;
    return;
    
}

vector<vector<int>> Solution::generateMatrix(int A) {
    int val=1;
    vector<vector<int>> spiral(A,vector<int>(A,0));
    int r=0,c=0;
    while(val<=A*A){
        MR(r,c,spiral,val);
        MD(r,c,spiral,val);
        ML(r,c,spiral,val);
        MU(r,c,spiral,val);
    }
    return spiral;
}
