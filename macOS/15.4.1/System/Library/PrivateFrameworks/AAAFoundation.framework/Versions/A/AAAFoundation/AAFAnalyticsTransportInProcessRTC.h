@class NSMutableArray, NSString, NSDictionary, NSNumber, RTCReporting;

@interface AAFAnalyticsTransportInProcessRTC : NSObject <AAFAnalyticstRTCTransport>

@property (readonly, copy, nonatomic) NSNumber *clientType;
@property (readonly, copy, nonatomic) NSString *clientBundleId;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *sessionInfo;
@property (retain, nonatomic) RTCReporting *rtcReportingSession;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (nonatomic) unsigned long long sessionState;
@property (nonatomic) unsigned long long sessionGracePeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyticsTransportRTCWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (oneway void)sendEvent:(id)a0;
- (void)configureReportingSessionWithCompletion:(id /* block */)a0;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
- (id)_createPayloadWith:(id)a0;
- (BOOL)_sendMessageWithCategory:(id)a0 payload:(id)a1 error:(id *)a2;

@end
