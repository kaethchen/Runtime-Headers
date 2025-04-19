@class FirefoxDataDirectories;

@interface FirefoxImporter : BrowserImportEngine

@property (readonly, nonatomic) FirefoxDataDirectories *dataDirectories;

- (BOOL)_openDatabaseAtURL:(id)a0 logDescription:(id)a1 performBlock:(id /* block */)a2;
- (id)initWithDataDirectories:(id)a0;
- (BOOL)openCredentialsJSONFileAndPerformBlock:(id /* block */)a0;
- (BOOL)openLegacyCredentialsDatabaseAndPerformBlock:(id /* block */)a0;
- (BOOL)openPlacesDatabaseAndPerformBlock:(id /* block */)a0;

@end
