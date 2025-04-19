@class NSString, ACAccount, NSData;
@protocol AMSBagProtocol;

@interface AMSPushRegisterTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly, copy) NSString *environment;
@property (readonly, copy) NSData *token;

- (void).cxx_destruct;
- (id)performTask;
- (void)_updateStorageWithResult:(id)a0 storage:(id)a1;
- (id)initWithAccount:(id)a0 token:(id)a1 environment:(id)a2 bag:(id)a3;

@end
