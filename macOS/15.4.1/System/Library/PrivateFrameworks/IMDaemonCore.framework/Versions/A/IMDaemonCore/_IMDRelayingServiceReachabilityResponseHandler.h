@class NSString, IMServiceReachabilityResult, NSData;

@interface _IMDRelayingServiceReachabilityResponseHandler : NSObject <IMServiceReachabilityResponseHandler>

@property (retain, nonatomic) IMServiceReachabilityResult *lastResult;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *fromIdentifier;
@property (retain, nonatomic) NSString *toIdentifier;

- (void).cxx_destruct;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;
- (void)_deferSendingCurrentResultIfNeeded;
- (void)_sendCurrentResult;
- (id)initWithRequestID:(id)a0 pushToken:(id)a1 fromIdentifier:(id)a2 toIdentifier:(id)a3;

@end
