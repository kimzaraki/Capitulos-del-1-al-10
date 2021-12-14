#include<iostream> //#include

enum ItemType{ itemtype_sword, itemtype_torch, itemtype_potion }; std::string getItemName(ItemType itemtype){ if(ItemType=itemtype_sword){ return "sword"; } if(ItemType==itemtype_torch){ return "torch"; } if(ItemType==itemtype_potion){ return "potion"; }

} int main(){ ItemType{itemtype_torch}; std::cout<<"you are acrring a "<<getItemName(itemtype)<<'\n'; return 0; }
