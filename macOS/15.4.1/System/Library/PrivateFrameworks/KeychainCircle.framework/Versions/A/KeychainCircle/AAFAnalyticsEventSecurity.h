@class AAFAnalyticsEvent, NSObject;
@protocol OS_dispatch_queue;

@interface AAFAnalyticsEventSecurity : NSObject

@property (retain) AAFAnalyticsEvent *event;
@property BOOL areTestsEnabled;
@property BOOL canSendMetrics;
@property BOOL isAAAFoundationAvailable;
@property BOOL isAuthKitAvailable;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)fetchDeviceSessionIDFromAuthKit:(id)a0;
+ (BOOL)isAAAFoundationAvailable;
+ (BOOL)isAuthKitAvailable;

- (void).cxx_destruct;
- (id)initWithKeychainCircleMetrics:(id)a0 altDSID:(id)a1 flowID:(id)a2 deviceSessionID:(id)a3 eventName:(id)a4 testsAreEnabled:(BOOL)a5 canSendMetrics:(BOOL)a6 category:(id)a7;
- (void)addMetrics:(id)a0;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0;
- (id)getEvent;
- (id)initWithCKKSMetrics:(id)a0 altDSID:(id)a1 eventName:(id)a2 testsAreEnabled:(BOOL)a3 category:(id)a4 sendMetric:(BOOL)a5;
- (id)initWithKeychainCircleMetrics:(id)a0 altDSID:(id)a1 eventName:(id)a2 category:(id)a3;
- (BOOL)permittedToSendMetrics;

@end
