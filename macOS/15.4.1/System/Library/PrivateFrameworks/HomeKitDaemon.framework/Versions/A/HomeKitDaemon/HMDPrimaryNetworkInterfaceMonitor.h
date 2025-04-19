@class HMDPrimaryNetworkInterfaceDetails, HMDNetworkInfoController, HMDHome, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_path, OS_nw_path_monitor, OS_dispatch_queue;

@interface HMDPrimaryNetworkInterfaceMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDHome *home;
@property (retain) HMDNetworkInfoController *networkInfoController;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *defaultEvaluator;
@property (retain, nonatomic) NSObject<OS_nw_path> *defaultPath;
@property (retain) HMDPrimaryNetworkInterfaceDetails *interfaceDetails;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pathMonitorQueue;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)updateWithTestInterfaceDetails:(id)a0;
- (void)_fetchPrimaryNetworkInfo;
- (void)_handlePathMonitorUpdate:(id)a0;
- (void)_handleResidentWasUpdatedNotification:(id)a0;
- (BOOL)_shouldAssertOnChannelWithInterfaceDetails:(id)a0;
- (void)_updatePrimaryNetworkWithInterfaceDetails:(id)a0;
- (id)initWithHome:(id)a0 networkInfoController:(id)a1;
- (id)statusKitNetworkDataForDevice:(id)a0 shouldIncludeAssertionTimeStamp:(BOOL)a1;

@end
