@class IMServiceReachabilityResult;

@interface IMDRelayServiceReachabilityResponse : NSObject

@property (retain, nonatomic) IMServiceReachabilityResult *result;

+ (id)responseFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)createDictionary;

@end
