@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (void)setLoaded:(BOOL)a0;
- (id)delayedContext;
- (void)setDelayedContext:(id)a0;

@end
