@interface KVIncrementalDatasetStream : KVDatasetStream

- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;
- (BOOL)removeItemWithItemId:(id)a0 error:(id *)a1;
- (unsigned long long)priorVersion;
- (BOOL)addOrUpdateCascadeItem:(id)a0 error:(id *)a1;

@end
