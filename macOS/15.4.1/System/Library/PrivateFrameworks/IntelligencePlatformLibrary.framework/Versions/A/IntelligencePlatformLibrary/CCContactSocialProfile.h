@class NSString;

@interface CCContactSocialProfile : CCItemMessage

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *serviceName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLabel:(id)a0 urlString:(id)a1 username:(id)a2 userIdentifier:(id)a3 serviceName:(id)a4 error:(id *)a5;

@end
