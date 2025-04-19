@class NSString;

@interface CCHomeServiceArea : CCItemMessage

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int areaIdentifier;
@property (nonatomic) BOOL hasAreaIdentifier;
@property (readonly, nonatomic) unsigned int associatedMapIdentifier;
@property (nonatomic) BOOL hasAssociatedMapIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 areaIdentifier:(id)a1 associatedMapIdentifier:(id)a2 error:(id *)a3;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
