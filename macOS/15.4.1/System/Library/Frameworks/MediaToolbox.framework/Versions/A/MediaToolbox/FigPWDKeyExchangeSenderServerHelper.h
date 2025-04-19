@class NSURLSession, NSString, NSURL, NSOperationQueue;

@interface FigPWDKeyExchangeSenderServerHelper : NSObject <NSURLSessionDelegate> {
    NSURLSession *_URLSession;
    NSURL *_keyServerURL;
    NSURL *_certServerURL;
    NSOperationQueue *_opQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithKeyServerURLString:(id)a0 certServerURLString:(id)a1;
- (void)requestCertDataFromServer:(id /* block */)a0;
- (void)requestKeyDataFromServer:(id)a0 completionHandler:(id /* block */)a1;

@end
