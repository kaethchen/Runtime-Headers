@class NSURLSessionTask, ACAccount, AMSURLSession;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) AMSURLSession *session;
@property (retain) NSURLSessionTask *task;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 session:(id)a1 task:(id)a2;

@end
