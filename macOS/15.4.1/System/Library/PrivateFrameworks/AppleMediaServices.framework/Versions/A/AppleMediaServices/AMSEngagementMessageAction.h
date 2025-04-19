@class NSString, NSDictionary, NSURL, AMSMetricsEvent;

@interface AMSEngagementMessageAction : NSObject

@property (copy) NSDictionary *clickstreamMetricsEvent;
@property (retain) NSURL *deepLink;
@property (retain) NSString *identifier;
@property (retain) NSURL *iconURL;
@property (retain) NSString *kind;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (copy) NSDictionary *parameters;
@property BOOL requiresDelegate;
@property long long style;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (id)exportObject;
- (id)initWithJSObject:(id)a0;
- (id)makeDialogAction;

@end
