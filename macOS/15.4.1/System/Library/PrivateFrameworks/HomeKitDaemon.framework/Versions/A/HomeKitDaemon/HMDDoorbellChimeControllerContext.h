@class NSUUID, HMDCharacteristicsAvailabilityListener, NSNotificationCenter, NSString, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDDoorbellBulletinUtilities;

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext>

@property (weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) id<HMDDoorbellBulletinUtilities> doorbellBulletinUtilities;
@property (readonly) double doorbellChimeMaximumAnnounceDelay;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
