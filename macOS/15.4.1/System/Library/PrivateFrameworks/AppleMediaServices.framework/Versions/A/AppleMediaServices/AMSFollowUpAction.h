@class NSURLRequest, NSString, NSMutableDictionary, NSURL, NSObject, AMSMetricsEvent;
@protocol OS_dispatch_queue;

@interface AMSFollowUpAction : NSObject {
    NSMutableDictionary *_userInfo;
}

@property (retain, nonatomic) NSString *backingIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) NSString *identifier;
@property (retain) NSString *label;
@property (retain) NSString *logKey;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (retain) NSString *parentIdentifier;
@property (retain) NSString *preferredClient;
@property (retain) NSURLRequest *request;
@property BOOL requiresFollowUpUI;
@property BOOL shouldClear;
@property (retain) NSURL *url;
@property (retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 parentIdentifier:(id)a1;
- (void)_setUserInfoProperty:(id)a0 forKey:(id)a1;
- (id)generateAction;
- (id)initWithAction:(id)a0 parentIdentifier:(id)a1;
- (id)initWithItem:(id)a0 action:(id)a1;
- (id)initWithJSONDictionary:(id)a0 parentIdentifier:(id)a1;
- (id)performActionsWithBag:(id)a0 account:(id)a1;
- (id)performActionsWithContract:(id)a0 account:(id)a1;
- (id)postMetricsWithBag:(id)a0;
- (id)postMetricsWithBagContract:(id)a0;

@end
