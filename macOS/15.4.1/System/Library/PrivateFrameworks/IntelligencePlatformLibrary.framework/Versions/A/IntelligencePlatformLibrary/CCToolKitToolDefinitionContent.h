@class NSData;

@interface CCToolKitToolDefinitionContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) unsigned int toolkitProtoVersion;
@property (nonatomic) BOOL hasToolkitProtoVersion;
@property (readonly, nonatomic) NSData *toolkitProtoBytes;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithToolkitProtoVersion:(id)a0 toolkitProtoBytes:(id)a1 error:(id *)a2;

@end
