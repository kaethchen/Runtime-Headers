@class NSObject;
@protocol OS_dispatch_queue, LACBackoffCounter;

@interface MechanismContext : NSObject

@property (retain, nonatomic) id<LACBackoffCounter> backoffCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
