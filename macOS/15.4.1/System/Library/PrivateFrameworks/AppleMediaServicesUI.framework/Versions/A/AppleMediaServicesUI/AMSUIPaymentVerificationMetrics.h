@class NSString;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationMetrics : NSObject

@property (retain) NSString *appID;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *displayReason;

+ (id)_metricsInstanceWithBag:(id)a0;
+ (id)_event;

- (void).cxx_destruct;
- (void)flushEvents;
- (id)_propertiesWithPageId:(id)a0 displayReason:(id)a1;
- (id)_propertiesWithTargetId:(id)a0 pageId:(id)a1 displayReason:(id)a2;
- (void)enqueueEventWithPageId:(id)a0 displayReason:(id)a1;
- (void)enqueueEventWithTargetId:(id)a0 pageId:(id)a1 displayReason:(id)a2;
- (id)initWithBag:(id)a0 appID:(id)a1;

@end
