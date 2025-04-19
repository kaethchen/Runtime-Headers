@class AMSURLSession;

@interface WLKURLSessionManager : NSObject

@property (retain, nonatomic) AMSURLSession *urlSession;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
