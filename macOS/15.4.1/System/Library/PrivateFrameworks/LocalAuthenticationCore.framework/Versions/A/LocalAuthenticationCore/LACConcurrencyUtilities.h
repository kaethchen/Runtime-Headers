@class NSObject;
@protocol OS_dispatch_queue;

@interface LACConcurrencyUtilities : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *daemonQueue;

+ (id)createDefaultQueueWithIdentifier:(id)a0 concurrencyAttribute:(id)a1;
+ (id)createDefaultSerialQueueWithIdentifier:(id)a0;
+ (id)createUserInitiatedSerialQueueWithIdentifier:(id)a0;
+ (id)globalUserInitiatedConcurrentQueue;
+ (id)createQueueWithIdentifier:(id)a0 concurrencyAttribute:(id)a1 qos:(unsigned int)a2;
+ (id)createSerialQueueWithIdentifier:(id)a0 qos:(unsigned int)a1;

@end
