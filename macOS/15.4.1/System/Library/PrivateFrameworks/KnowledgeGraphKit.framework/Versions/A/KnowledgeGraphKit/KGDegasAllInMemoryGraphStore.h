@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)persistentStoreFileExtension;

- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (id)url;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (unsigned long long)graphVersion;
- (void)setGraphVersion:(unsigned long long)a0;
- (id)graphIdentifier;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;

@end
