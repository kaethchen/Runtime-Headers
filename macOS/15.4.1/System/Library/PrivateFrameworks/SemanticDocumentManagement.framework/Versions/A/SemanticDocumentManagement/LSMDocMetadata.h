@class NSURL, NSMapTable;

@interface LSMDocMetadata : NSObject {
    NSURL *_databaseURL;
    NSMapTable *_dbConnections;
    long long _version;
}

- (void)dealloc;
- (BOOL)isComplete;
- (void)reset;
- (void)markComplete;
- (BOOL)_checkDBVersion;
- (BOOL)_createDB;
- (BOOL)addDocWithAttributes:(id)a0;
- (BOOL)addHelpbookID:(id)a0;
- (id)allFilePaths;
- (id)allHelpbookIDs;
- (id)environmentProperties;
- (id)initWithDatabaseURL:(id)a0 error:(id *)a1;
- (long long)numOfDocs;
- (id)objectForAttribute:(id)a0 docID:(long long)a1;
- (void)releaseManagedObjectContextForCurrentThread;
- (BOOL)setEnvironmentProperties:(id)a0;

@end
