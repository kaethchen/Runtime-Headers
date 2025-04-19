@class NSString, NSObject;
@protocol OS_dispatch_queue, SVXMyriadRequestDelegate;

@interface SVXMyriadDeviceManager : NSObject <SVXMyriadRequestDelegate> {
    id<SVXMyriadRequestDelegate> _device;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setupEnabled:(BOOL)a0;
- (void)_initializeMyriadDeviceWithInstanceContext:(id)a0 analytics:(id)a1 preferences:(id)a2 delegate:(id)a3 workQueue:(id)a4 analyticsQueue:(id)a5;
- (id)initWithInstanceContext:(id)a0 analytics:(id)a1 preferences:(id)a2 delegate:(id)a3;
- (void)preheatMyriad;
- (void)resetMyriad;
- (void)startAdvertising:(unsigned long long)a0 withSCDAGoodnessScoreContext:(id)a1 withSCDAAudioContext:(id)a2 completion:(id /* block */)a3;

@end
