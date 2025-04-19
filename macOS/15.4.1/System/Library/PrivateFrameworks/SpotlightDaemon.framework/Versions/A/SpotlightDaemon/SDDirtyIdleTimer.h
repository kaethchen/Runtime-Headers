@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SDDirtyIdleTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *idleTimer;
@property (nonatomic) unsigned long long idleStartTime;
@property (nonatomic) unsigned int resetCount;
@property (nonatomic) unsigned int dirtyCount;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) unsigned long long idleTimeout;
@property (nonatomic) unsigned long long dirtyTimeout;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)dirty;
- (void)_stop;
- (id)initWithQueue:(id)a0 timeoutBlock:(id /* block */)a1;

@end
