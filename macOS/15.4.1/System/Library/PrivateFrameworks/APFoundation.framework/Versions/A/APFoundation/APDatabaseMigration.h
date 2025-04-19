@class NSArray, APDatabasePath;

@interface APDatabaseMigration : NSObject

@property (readonly, nonatomic) APDatabasePath *databasePath;
@property (readonly, nonatomic) NSArray *sortedScriptsURLs;

- (void).cxx_destruct;
- (id)initWithDatabasePath:(id)a0;
- (id)getMigrationQueriesFromVersion:(int)a0;
- (id)_buildSortedURLs;
- (id)_getQueriesForFileAtURL:(id)a0;
- (long long)_getVersionFromFileAtURL:(id)a0;
- (long long)lastVersion;

@end
