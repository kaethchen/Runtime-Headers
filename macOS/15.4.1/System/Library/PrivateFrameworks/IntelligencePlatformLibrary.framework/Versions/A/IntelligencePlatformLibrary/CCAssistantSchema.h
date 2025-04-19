@class CCAssistantSchemaVersion;

@interface CCAssistantSchema : CCItemMessage

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) CCAssistantSchemaVersion *version;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(unsigned int)a0 version:(id)a1 error:(id *)a2;

@end
