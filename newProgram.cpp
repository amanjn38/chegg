struct item{
    char name[];
    char category[];
    float price;
};
struct store{
    char name[];
    char website[];
};
struct list{
    store str;
    item itm;
    list *next;
};
class CS_Shop{
    public:
    CS_Shop();
    ~CS_Shop();
    private:
    int Add_item(char store_name[],item store_itemtoadd);
    int New_Store(char store_name[],char website);
    int Remove_Item(char item_name[]);
    int Display_Store(char store_name[]);
    int Display_Category(char category);

};

