@class NSString, AMSFDSRequest, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSGenerateFDSTask : AMSTask

@property (class, readonly) BOOL deviceSupportsAFDSValues;
@property (class, readonly) BOOL deviceSupportsODIValues;

@property (readonly) AMSFDSRequest *request;
@property (readonly) ACAccount *account;
@property (readonly) unsigned long long action;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *logKey;
@property (readonly) NSNumber *purchaseIdentifier;

+ (BOOL)deviceSupportsFreeODIWithBag:(id)a0 logKey:(id)a1;

- (void).cxx_destruct;
- (id)runTask;
- (unsigned long long)_actionForPurchaseInfo:(id)a0 bag:(id)a1 logKey:(id)a2;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
