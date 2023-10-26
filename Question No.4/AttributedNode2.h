#ifndef ATTRIBUTEDNODE2_H
#define ATTRIBUTEDNODE2_H
class AttributedNode2 
{
private:
    std::string Profession;
    std::string CityName;
public:
    AttributedNode2();
    AttributedNode2(std::string prof,std::string city);
    virtual~AttributedNode2();
    void setProfession(std::string p);
    std::string getProfession();
    void setCityName(std::string c);
    std::string getCityName();
};

#endif