@class CCHomeServiceAreaMap, CCHomeServiceArea;

@interface CCHomeServiceAreaContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) unsigned long long matterDeviceIdentifier;
@property (nonatomic) BOOL hasMatterDeviceIdentifier;
@property (readonly, nonatomic) CCHomeServiceArea *area;
@property (readonly, nonatomic) CCHomeServiceAreaMap *map;
@property (readonly, nonatomic) unsigned int serviceAreaType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithMatterDeviceIdentifier:(id)a0 serviceArea:(id)a1 serviceAreaType:(unsigned int)a2 error:(id *)a3;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
