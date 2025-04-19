@class RTCReporting, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKAnalytics : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSMutableArray *payloadArray;
@property (retain) RTCReporting *activeRTCReportingSession;

+ (id)sharedInstance;
+ (void)reportForCategory:(unsigned short)a0 payload:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_createRTCReportingSessionAndSend;
- (BOOL)_isNetworkReachable;
- (void)_reportForCategory:(unsigned short)a0 payload:(id)a1;
- (id)_retrieveCategoryName:(unsigned short)a0;

@end
