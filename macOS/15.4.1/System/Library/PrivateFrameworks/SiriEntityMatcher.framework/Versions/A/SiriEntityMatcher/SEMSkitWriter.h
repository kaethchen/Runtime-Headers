@class NSURL, SEMSkitInfo;

@interface SEMSkitWriter : NSObject <SEMSkitWriteAccess> {
    NSURL *_directoryURL;
    SEMSkitInfo *_info;
    struct unique_ptr<semskitbridge::Indexer, std::default_delete<semskitbridge::Indexer>> { struct __compressed_pair<semskitbridge::Indexer *, std::default_delete<semskitbridge::Indexer>> { struct Indexer *__value_; } __ptr_; } _indexer;
    BOOL _inTransaction;
}

@property (readonly, nonatomic) unsigned long long flushThreshold;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)clearWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (BOOL)removeItemWithExternalId:(id)a0 error:(id *)a1;
- (BOOL)_beginTransactionWithError:(id *)a0;
- (BOOL)addCascadeSharedItemContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 personaIdentifier:(id)a3 externalId:(id)a4 error:(id *)a5;
- (BOOL)commitChanges:(BOOL *)a0 error:(id *)a1;
- (unsigned short)indexFeatures;
- (long long)indexLocale;
- (id)initWithSkitDirectoryURL:(id)a0 dataProtectionClass:(int)a1 flushThreshold:(unsigned long long)a2;
- (BOOL)rollbackChanges:(id *)a0;
- (BOOL)setTransactionIndexFeatures:(unsigned short)a0 error:(id *)a1;
- (BOOL)setTransactionLocale:(long long)a0 assetPath:(id)a1 error:(id *)a2;
- (BOOL)shouldMerge:(BOOL *)a0 error:(id *)a1;

@end
