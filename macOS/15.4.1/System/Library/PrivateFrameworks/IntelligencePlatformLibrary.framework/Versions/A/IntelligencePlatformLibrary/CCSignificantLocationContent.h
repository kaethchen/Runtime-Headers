@class NSString, CCSignificantLocationAddress;

@interface CCSignificantLocationContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSString *mapItemName;
@property (readonly, nonatomic) CCSignificantLocationAddress *address;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPreferredName:(id)a0 mapItemName:(id)a1 address:(id)a2 error:(id *)a3;

@end
