@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetChangeXPCEventHandler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *listeners;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_handleXPCEvent:(id)a0;

@end
