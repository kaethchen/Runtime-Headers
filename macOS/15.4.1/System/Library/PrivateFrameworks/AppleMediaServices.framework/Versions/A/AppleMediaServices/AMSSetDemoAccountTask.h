@class NSString, ACAccountStore, AMSProcessInfo;

@interface AMSSetDemoAccountTask : AMSTask

@property (readonly) ACAccountStore *accountStore;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *password;
@property (retain) NSString *username;

- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)performTask;
- (id)initWithUsername:(id)a0 password:(id)a1 accountStore:(id)a2;

@end
