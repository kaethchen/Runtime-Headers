@class AMSURLTaskInfo, NSString, NSDictionary, AMSDialogRequest;

@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable>

@property (retain) AMSDialogRequest *dialogRequest;
@property (retain) NSDictionary *responseDictionary;
@property (retain) AMSURLTaskInfo *taskInfo;
@property long long verifyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dialogRequestForCVVFromPayload:(id)a0 verifyType:(long long)a1;
+ (id)_dialogRequestForCarrierFromPayload:(id)a0 verifyType:(long long)a1;
+ (long long)_verifyTypeFromPayload:(id)a0;
+ (BOOL)isVerifyPurchasePayload:(id)a0;

- (void).cxx_destruct;
- (id)_handleCVVDialogResult:(id)a0 shouldReattempt:(BOOL *)a1;
- (id)_handleCarrierDialogResult:(id)a0 shouldReattempt:(BOOL *)a1;
- (id)_runCVVRequestForCode:(id)a0 error:(id *)a1;
- (id)_runCarrierNewCodeWithError:(id *)a0;
- (id)_runCarrierVerifyCode:(id)a0 error:(id *)a1;
- (id)initWithPayload:(id)a0 taskInfo:(id)a1;
- (id)performWithTaskInfo:(id)a0;

@end
