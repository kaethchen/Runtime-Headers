@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MCMSystemChangeMonitor : NSObject <MCMUserIdentityCacheObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSArray *flushables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
