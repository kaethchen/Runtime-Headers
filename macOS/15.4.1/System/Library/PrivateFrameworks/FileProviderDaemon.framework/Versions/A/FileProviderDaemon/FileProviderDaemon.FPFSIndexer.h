@interface FileProviderDaemon.FPFSIndexer : FPDDomainIndexer <FPSpotlightDropIndexDelegate> {
    void /* unknown type, empty encoding */ enumerator;
    void /* unknown type, empty encoding */ lastIndexedAnchor;
    void /* unknown type, empty encoding */ spotlightIndexer;
}

@property (nonatomic, readonly) BOOL learnNeedsAuthenticationFromBatchError;

- (id)init;
- (void).cxx_destruct;
- (void)didDropIndexWithDropReason:(unsigned long long)a0;
- (void)dumpStateTo:(id)a0;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;
- (void)signalNeedsReindexFromScratchWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
