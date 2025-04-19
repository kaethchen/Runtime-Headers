@class NSString, NSURLSession;

@interface XARStonehengeRequest : NSObject {
    NSURLSession *_session;
    NSString *_apiKey;
    NSString *_apiSecret;
}

- (id)init;
- (void).cxx_destruct;

@end
