@class NSString, NSURLSession;

@interface APHTTPSession : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)sendRequest:(id)a0;
- (id)GET:(id)a0 headers:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)HEAD:(id)a0 headers:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)POST:(id)a0 headers:(id)a1 body:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)cancelTaskWithCompletionHandler:(id /* block */)a0;
- (id)initWithSessionConfiguration:(id)a0;
- (void)invalidateSessionAndCancelTasks:(BOOL)a0;
- (BOOL)sendFakeResponseForRequest:(id)a0;

@end
