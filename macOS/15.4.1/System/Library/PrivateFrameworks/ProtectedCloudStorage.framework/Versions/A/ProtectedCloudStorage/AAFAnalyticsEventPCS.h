@class AAFAnalyticsEvent, NSObject;
@protocol OS_dispatch_queue;

@interface AAFAnalyticsEventPCS : NSObject

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
- (void)addMetrics:(id)a0;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0;
- (id)getEvent;
- (BOOL)permittedToSendMetrics;
- (id)initWithPCSMetrics:(id)a0 altDSID:(id)a1 flowID:(id)a2 deviceSessionID:(id)a3 eventName:(id)a4 testsAreEnabled:(BOOL)a5 canSendMetrics:(BOOL)a6 category:(id)a7;

@end
