@interface FPDExtensionIndexer : FPDDomainIndexer

- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexForReason:(unsigned long long)a0 completion:(id /* block */)a1;

@end
