@interface VCPHomeKitAnalysisSession : NSObject

+ (id)sessionWithProperties:(id)a0 andResultsHandler:(id /* block */)a1;
+ (id)sessionWithProperties:(id)a0 withResultsHandler:(id /* block */)a1 andInterruptionHandler:(id /* block */)a2;

- (id)init;
- (void)invalidate;
- (void)processVideoFragmentAssetData:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
- (void)processMessageWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;
- (void)processResults:(id)a0 withReply:(id /* block */)a1;
- (void)processVideoFragmentAssetData:(id)a0 withOptions:(id)a1 andErrorHandler:(id /* block */)a2;

@end
