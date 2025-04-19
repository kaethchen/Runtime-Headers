@class NSString, NSArray;

@interface CCInstalledAppContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSString *displayAppName;
@property (readonly, nonatomic) NSString *spokenName;
@property (readonly, nonatomic) NSArray *alternativeAppNames;
@property (readonly, nonatomic) NSString *carPlayAlternativeDisplayName;
@property (readonly, nonatomic) NSString *spotlightName;
@property (readonly, nonatomic) NSString *providerName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 bundleName:(id)a1 displayAppName:(id)a2 spokenName:(id)a3 alternativeAppNames:(id)a4 carPlayAlternativeDisplayName:(id)a5 spotlightName:(id)a6 providerName:(id)a7 error:(id *)a8;

@end
