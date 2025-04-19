@class NSString, CCSiriCompanionContextAudioContentMediaCategoriesRepeatedEnum;

@interface CCSiriCompanionContextAudioContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) CCSiriCompanionContextAudioContentMediaCategoriesRepeatedEnum *mediaCategories;
@property (readonly, nonatomic) unsigned int subscriptionStatus;
@property (readonly, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) int nowPlayingCount;
@property (nonatomic) BOOL hasNowPlayingCount;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithAppBundleId:(id)a0 mediaCategories:(id)a1 subscriptionStatus:(unsigned int)a2 localizedAppName:(id)a3 nowPlayingCount:(id)a4 error:(id *)a5;

@end
