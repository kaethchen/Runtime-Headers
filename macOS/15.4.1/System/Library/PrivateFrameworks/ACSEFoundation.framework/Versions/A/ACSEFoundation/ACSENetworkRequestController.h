@class NSArray, NSURLSession;

@interface ACSENetworkRequestController : NSObject {
    NSURLSession *_session;
    NSArray *_numberOfSecondsBetweenRetries;
}

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (void)executeRequest:(id)a0 acceptedStatusCodes:(id)a1 completion:(id /* block */)a2;
- (id)initWithSession:(id)a0 numberOfSecondsBetweenRetries:(id)a1;

@end
