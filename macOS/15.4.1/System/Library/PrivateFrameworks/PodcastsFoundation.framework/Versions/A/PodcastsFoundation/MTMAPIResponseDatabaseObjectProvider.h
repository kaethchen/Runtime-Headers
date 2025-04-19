@interface MTMAPIResponseDatabaseObjectProvider : NSObject <NSFetchedResultsControllerDelegate> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ databaseObjectsCache;
    void /* unknown type, empty encoding */ needsParsing;
    void /* unknown type, empty encoding */ showsFRC;
    void /* unknown type, empty encoding */ episodesFRC;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)databaseObjectWithStoreID:(long long)a0 contentType:(long long)a1;

@end
