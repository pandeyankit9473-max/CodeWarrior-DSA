class ProductOfNumbers {
    vector<int>prefix;
public:
    ProductOfNumbers() {
        prefix.push_back(1);
    }
    
    void add(int num) {
       if(num==0){
        prefix.clear();
        prefix.push_back(1);

       }
       else{
        int last=prefix.back();
        prefix.push_back(last*num);
       }
    }
    
    int getProduct(int k) {
        if(k>=prefix.size()) return 0; //its 0 wlaa case ...
        int n=prefix.size();
        return prefix[n-1]/prefix[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */