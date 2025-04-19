@interface PHMomentList : PHCollectionList

+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)description;
- (id)localizedTitle;
- (BOOL)hasLocationInfo;
- (BOOL)hasLocalizedTitle;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (long long)collectionListType;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)localizedLocationNames;

@end
