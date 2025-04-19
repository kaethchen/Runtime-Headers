@interface ABPostalAddressFormatter : NSObject

+ (id)formattedAddressFromDictionary:(id)a0 includeName:(BOOL)a1 includeCompany:(BOOL)a2 order:(id *)a3;
+ (id)formattedAddressFromDictionary:(id)a0 includeName:(BOOL)a1 includeCompany:(BOOL)a2 order:(id *)a3 defaultCountryCode:(id)a4;

@end
