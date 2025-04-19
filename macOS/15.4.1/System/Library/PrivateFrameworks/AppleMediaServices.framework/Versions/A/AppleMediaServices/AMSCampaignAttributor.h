@class NSURL;

@interface AMSCampaignAttributor : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bag;
@property (nonatomic, retain) void /* unknown type, empty encoding */ account;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppBag:(id)a0;
- (id)initWithBag:(id)a0;
- (void)processURL:(NSURL *)a0 ignoreMarketing:(BOOL)a1 completionHandler:(void (^)(NSURL *))a2;

@end
