@class NSString;

@interface PHImportSession : PHAssetCollection

@property (readonly, nonatomic) NSString *importSessionID;

+ (id)fetchImportSessionsWithOptions:(id)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
