@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (BOOL)requestShouldThrottle:(id)a0;

@end
