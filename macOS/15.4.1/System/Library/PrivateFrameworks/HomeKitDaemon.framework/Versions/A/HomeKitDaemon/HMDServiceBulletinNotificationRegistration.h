@class NSUUID, NSNumber;

@interface HMDServiceBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *serviceInstanceID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 conditions:(id)a2;

@end
