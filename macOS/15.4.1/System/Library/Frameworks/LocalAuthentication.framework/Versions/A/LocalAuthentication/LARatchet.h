@class NSString, LARatchetManager, LAContext;

@interface LARatchet : NSObject {
    LARatchetManager *_ratchetManager;
    LAContext *_context;
}

@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)cancelWithReason:(id)a0 completion:(id /* block */)a1;
- (void)stateWithCompletion:(id /* block */)a0;
- (void)armWithOptions:(id)a0 completion:(id /* block */)a1;

@end
