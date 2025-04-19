@class NSString, KHThemeDatabase;
@protocol KHBehaviorCacheProtocol;

@interface KHModel : KHDBUuidModel <KHJSONGeneratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) KHThemeDatabase *themeDB;
@property (readonly, nonatomic) id<KHBehaviorCacheProtocol> behaviorCache;

+ (unsigned long long)_databaseCodeForModelClass:(Class)a0;
+ (id)_databaseForCode:(unsigned long long)a0;
+ (id)_defaultDatabase;
+ (id)anyModelWhere:(id)a0;
+ (unsigned long long)countOfModelsWhere:(id)a0;
+ (void)deleteModelsWhere:(id)a0;
+ (id)dictionaryForKey:(id)a0 value:(id)a1 where:(id)a2;
+ (id)dictionaryOfSetsForKey:(id)a0 value:(id)a1 defaultValue:(id)a2 where:(id)a3;
+ (void)insertIntoRidList:(id)a0 idsForColumn:(id)a1 where:(id)a2;
+ (BOOL)modelExistsWhere:(id)a0;
+ (id)modelForId:(id)a0;
+ (id)modelIdListWhere:(id)a0;
+ (id)modelIdsWhere:(id)a0;
+ (id)modelUuidsWhere:(id)a0;
+ (id)modelsForIdList:(id)a0;
+ (id)modelsForIds:(id)a0;
+ (id)modelsWhere:(id)a0;
+ (id)nestedDictionariesForOuterKey:(id)a0 innerKey:(id)a1 value:(id)a2 where:(id)a3;
+ (id)select:(id)a0 orderedBy:(id)a1 where:(id)a2;
+ (id)selectDistinct:(id)a0 where:(id)a1;
+ (id)selectOneObject:(id)a0 where:(id)a1;
+ (void)setDefaultDatabase:(unsigned long long)a0 forClass:(Class)a1;
+ (void)updateColumn:(id)a0 toValue:(id)a1 where:(id)a2;

- (BOOL)isEqual:(id)a0;
- (void)setUuid:(id)a0;
- (id)uuid;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)commonInit;
- (void)encodeWithDictionary:(id)a0;
- (id)JSONDictionary;
- (void)persist;
- (id)JSONRepresentation;
- (id)initWithModelId:(id)a0;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (BOOL)isProjectModel;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;
- (id)themeBundle;

@end
