@class NSString, AMSRBSKeepAlive, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly) NSString *name;
@property (readonly) long long style;

+ (void)_handleAssertionExpiration;
+ (BOOL)_isRBSAssertionsEnabled;
+ (id)keepAliveWithFormat:(id)a0;
+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)rbs_keepAliveWithName:(id)a0;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 qosOverrideIfRBManaged:(unsigned int)a2 relativePriority:(long long)a3 block:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (id)_cacheKey;
- (id)_assertionName;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_startLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (id)initRBSWithName:(id)a0;
- (id)initRBSWithName:(id)a0 style:(long long)a1;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)rbs_invalidate;

@end
