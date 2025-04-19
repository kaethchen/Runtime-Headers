@class NSError, NSString, AMSDialogResult, ACAccount, AMSProcessInfo, AMSDialogRequest;
@protocol AMSBagProtocol;

@interface AMSHandleDialogResultTask : AMSTask

@property (copy) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (copy) NSString *proxyBundleId;
@property (readonly) AMSDialogRequest *request;
@property (readonly) AMSDialogResult *result;
@property (readonly, copy) NSError *error;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithRequest:(id)a0 result:(id)a1 error:(id)a2 bag:(id)a3;
- (id)initWithResult:(id)a0 bag:(id)a1;

@end
