@protocol LNTranscriptObservingProviderDelegate, LNNextActionObserverProtocol;

@interface LNTranscriptObservingProvider : LNTranscriptProvider

@property (retain, nonatomic) id<LNNextActionObserverProtocol> observer;
@property (weak, nonatomic) id<LNTranscriptObservingProviderDelegate> delegate;

+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)configureConnection:(id)a0;
- (void)startObservingNextActionStreamWithCompletion:(id /* block */)a0;
- (void)stopObservingNextActionStreamWithConnectionUUID:(id)a0 completion:(id /* block */)a1;

@end
