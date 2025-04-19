@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (id)transaction:(const char *)a0;
+ (id)openXPCTransactionStatus;
+ (void)_startTrackingTransaction:(id)a0;
+ (void)_stopTrackingTransaction:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(const char *)a0;
- (id)_statusDescription;
- (void)stillAlive;

@end
