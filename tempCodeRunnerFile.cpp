while(1){
            int pos=s.find(t);
            if(pos!=-1){
                s.erase(pos,t.length());
                s.insert(s.begin()+pos,'#');
            }
            else{
                break;
            }
        }