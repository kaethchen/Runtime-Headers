@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ULQueueScheduler : NSObject <ULScheduler>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
