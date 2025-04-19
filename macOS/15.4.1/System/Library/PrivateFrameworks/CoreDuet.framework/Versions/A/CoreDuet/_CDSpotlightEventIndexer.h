@class _CDEventIndexerContext, CSSearchableIndex, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject {
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}

@property (retain, nonatomic) _CDEventIndexerContext *context;
@property (readonly, nonatomic, getter=isIndexing) BOOL indexing;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)beginIndexingWithBatchSize:(unsigned long long)a0 completion:(id /* block */)a1;

@end
