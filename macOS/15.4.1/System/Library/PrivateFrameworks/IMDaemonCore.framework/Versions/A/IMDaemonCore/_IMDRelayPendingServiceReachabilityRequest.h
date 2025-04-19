@class NSString, NSMapTable, NSArray, IMServiceReachabilityResult, IMServiceReachabilityRequest, NSDate;

@interface _IMDRelayPendingServiceReachabilityRequest : NSObject

@property (retain, nonatomic) IMServiceReachabilityRequest *originalRequest;
@property (readonly, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMapTable *responseHandlers;
@property (retain, nonatomic) NSArray *sentToDevices;
@property (retain, nonatomic) IMServiceReachabilityResult *lastResult;
@property (retain, nonatomic) NSDate *lastUpdateTime;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id)a1;
- (id)createIncompleteFinalResult;
- (void)enumerateResponseHandlersWithBlock:(id /* block */)a0;

@end
