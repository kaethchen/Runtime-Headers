@class NSObject;
@protocol OS_dispatch_queue;

@interface ICQRetryController : NSObject {
    unsigned long long _numberOfAttempts;
    unsigned long long _maxNumberOfRetries;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _executionBlock;
}

@property (readonly, nonatomic) unsigned long long numberOfAttempts;

- (void).cxx_destruct;
- (BOOL)executeBlock;
- (id)initWithMaxNumberOfRetries:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)retryAfterSeconds:(unsigned long long)a0;

@end
