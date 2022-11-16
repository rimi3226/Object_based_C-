    MyArray(const MyArray& p){
        this->size=p.size;
        this->data=new int[p.size];
        for (int i = 0; i < p.size; i++)
        {
            this->data[i]=p.data[i];
        }
        
    }