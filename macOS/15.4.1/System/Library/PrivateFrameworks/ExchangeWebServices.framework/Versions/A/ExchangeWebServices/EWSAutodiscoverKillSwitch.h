@class NSString, NSURLSession;

@interface EWSAutodiscoverKillSwitch : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *autoDV2RedirectSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendRequestForRedirectWithCompletionHandler:(id /* block */)a0;

@end
