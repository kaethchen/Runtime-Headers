@class NSString, CCAppEntityTypeDisplayRepresentation, CCAppEntityDisplayRepresentation;

@interface CCAppCuratedEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) CCAppEntityDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) CCAppEntityTypeDisplayRepresentation *typeDisplayRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTypeIdentifier:(id)a0 displayRepresentation:(id)a1 typeDisplayRepresentation:(id)a2 error:(id *)a3;

@end
