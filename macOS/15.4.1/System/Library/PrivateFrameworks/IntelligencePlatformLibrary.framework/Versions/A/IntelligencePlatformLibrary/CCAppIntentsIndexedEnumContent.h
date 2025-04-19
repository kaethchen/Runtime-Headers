@class NSString, CCAppEnumTypeDisplayRepresentation, NSArray;

@interface CCAppIntentsIndexedEnumContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) CCAppEnumTypeDisplayRepresentation *typeDisplayRepresentation;
@property (readonly, nonatomic) NSArray *cases;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTypeIdentifier:(id)a0 typeDisplayRepresentation:(id)a1 cases:(id)a2 error:(id *)a3;

@end
