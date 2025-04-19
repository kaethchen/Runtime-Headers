@class NSData, ACAccount;
@protocol AMSBagProtocol;

@interface AMSAnisetteSyncTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSData *data;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(long long)a1 account:(id)a2 bag:(id)a3;
- (id)performSync;

@end
