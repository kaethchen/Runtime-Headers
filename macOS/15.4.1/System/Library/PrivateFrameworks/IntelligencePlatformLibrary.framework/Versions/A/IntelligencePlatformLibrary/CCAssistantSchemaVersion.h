@interface CCAssistantSchemaVersion : CCItemMessage

@property (readonly, nonatomic) int major;
@property (nonatomic) BOOL hasMajor;
@property (readonly, nonatomic) int minor;
@property (nonatomic) BOOL hasMinor;
@property (readonly, nonatomic) int patch;
@property (nonatomic) BOOL hasPatch;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithMajor:(id)a0 minor:(id)a1 patch:(id)a2 error:(id *)a3;

@end
