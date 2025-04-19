@class NSObject;
@protocol OS_dispatch_queue;

@interface CKSoftwareMapObserver : NSObject <ISSoftwareMapObserver>

@property (copy) id /* block */ block;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)softwareProduct:(id)a0 updatedState:(long long)a1;

@end
