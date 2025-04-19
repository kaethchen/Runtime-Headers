@class NSString, NSArray;

@interface CCAppShortcutEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *entityTitle;
@property (readonly, nonatomic) NSString *entityInstanceIdentifier;
@property (readonly, nonatomic) NSString *entityTypeIdentifier;
@property (readonly, nonatomic) NSString *providerClass;
@property (readonly, nonatomic) NSArray *entitySynonyms;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithEntityTitle:(id)a0 entityInstanceIdentifier:(id)a1 entityTypeIdentifier:(id)a2 providerClass:(id)a3 entitySynonyms:(id)a4 error:(id *)a5;
- (id)initWithEntityTitle:(id)a0 entityInstanceIdentifier:(id)a1 entityTypeIdentifier:(id)a2 providerClass:(id)a3 error:(id *)a4;

@end
