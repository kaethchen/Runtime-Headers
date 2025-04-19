@class NSUUID, NSString, NSDate;

@interface HMDMediaPropertyNotificationRegistration : HMFObject

@property (readonly) NSUUID *mediaProfileUniqueIdentifier;
@property (readonly, copy) NSString *mediaProperty;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSDate *lastModified;
@property (readonly) BOOL enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithMediaProfileUniqueIdentifier:(id)a0 mediaProperty:(id)a1 deviceIdsDestination:(id)a2 userUUID:(id)a3 lastModified:(id)a4 enabled:(BOOL)a5;

@end
