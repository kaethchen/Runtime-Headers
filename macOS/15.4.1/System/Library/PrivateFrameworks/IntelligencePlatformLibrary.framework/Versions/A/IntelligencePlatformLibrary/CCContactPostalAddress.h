@class NSString;

@interface CCContactPostalAddress : CCItemMessage

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *ISOCountryCode;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLabel:(id)a0 street:(id)a1 subLocality:(id)a2 city:(id)a3 subAdministrativeArea:(id)a4 state:(id)a5 postalCode:(id)a6 country:(id)a7 ISOCountryCode:(id)a8 error:(id *)a9;

@end
