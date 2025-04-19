@class NSString, NSObject;
@protocol OS_os_transaction, OS_voucher, NSObject;

@interface _NSActivityAssertion : NSObject {
    unsigned long long _options;
    NSString *_reason;
    NSObject<OS_os_transaction> *_transaction;
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    _Atomic unsigned long long _signpostID;
    id<NSObject> _xpcBoost;
    id _processAssertion;
    id /* block */ _expirationHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _ended;
    unsigned char _adoptPreviousVoucher;
}

+ (void)_dumpExpiringActivitives;
+ (id)_expirationHandlerExecutionQueue;
+ (void)_expireAllActivies;
+ (id)_expiringActivities;
+ (id)_expiringAssertionManagementQueue;
+ (id)_expiringTaskExecutionQueue;
+ (void)_performActivityWithOptions:(unsigned long long)a0 reason:(id)a1 usingBlock:(id /* block */)a2;
+ (void)_performExpiringActivityWithReason:(id)a0 usingBlock:(id /* block */)a1;

- (void)dealloc;
- (id)debugDescription;
- (void)_endFromDealloc:(BOOL)a0;
- (void)_fireExpirationHandler;
- (id)_initWithActivityOptions:(unsigned long long)a0 reason:(id)a1 expirationHandler:(id /* block */)a2;
- (BOOL)_isEnded;
- (void)_reactivate;

@end
