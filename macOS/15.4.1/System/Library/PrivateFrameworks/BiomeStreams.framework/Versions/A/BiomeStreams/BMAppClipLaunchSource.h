@class _DKKnowledgeStore, BMSource, _CDClientContext;

@interface BMAppClipLaunchSource : NSObject {
    BMSource *_storeSource;
}

@property (readonly, nonatomic) _CDClientContext *contextStore;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;

- (void).cxx_destruct;
- (id)identifier;
- (void)sendEvent:(id)a0;
- (id)initWithStoreSource:(id)a0;

@end
