@class NSURL, NSArray;

@interface SHClusterStatementRunner : NSObject

@property (readonly) struct sqlite3 { } *db;
@property (readonly) NSURL *databaseURL;
@property (readonly) NSArray *validDatabaseKeys;

+ (id)supportedKeys;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (id)mediaItemsAtCohesionLevel:(long long)a0 forQueryMediaIDs:(id)a1 filteredBySeedMediaIDs:(id)a2 error:(id *)a3;
- (id)mediaItemsFromPropertyCollection:(id)a0 error:(id *)a1;
- (id)mediaItemsSimilarToMediaItemValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)mediaItemsWithQuery:(id)a0 tokens:(id)a1 objects:(id)a2 error:(id *)a3;
- (id)supportedKeysForDatabase;
- (id)supportedKeysForDatabaseAsString;
- (id)supportedKeysForDatabaseAsStringWithPrefix:(id)a0;

@end
