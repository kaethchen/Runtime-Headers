@class NSString, HMDCharacteristicsAvailabilityListener, NSNotificationCenter, NSSet, HMDHAPAccessory, NSObject;
@protocol OS_dispatch_queue, HMDCameraRecordingSessionNotificationTriggerDelegate;

@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *cameraAccessory;
@property (readonly) HMDCharacteristicsAvailabilityListener *availabilityListener;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSString *logIdentifier;
@property (retain) NSSet *availableCharacteristics;
@property (readonly, copy) NSString *clientIdentifier;
@property (weak) id<HMDCameraRecordingSessionNotificationTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)_handleObservedCharacteristicsValueUpdate:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleCharacteristicsValueUpdated:(id)a0;
- (id)initWithCamera:(id)a0 workQueue:(id)a1;
- (id)initWithCamera:(id)a0 workQueue:(id)a1 availabilityListener:(id)a2 notificationCenter:(id)a3;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;

@end
