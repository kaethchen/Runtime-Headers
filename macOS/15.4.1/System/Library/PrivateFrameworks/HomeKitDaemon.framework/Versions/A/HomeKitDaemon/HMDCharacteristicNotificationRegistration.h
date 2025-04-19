@class NSUUID, NSString, NSDate, NSNumber;

@interface HMDCharacteristicNotificationRegistration : HMFObject

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSNumber *characteristicInstanceID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSDate *lastModified;
@property (readonly) BOOL enabled;
@property (readonly, copy) NSNumber *notificationThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessoryUUID:(id)a0 characteristicInstanceID:(id)a1 deviceIdsDestination:(id)a2 userUUID:(id)a3 lastModified:(id)a4 enabled:(BOOL)a5 notificationThreshold:(id)a6;

@end
