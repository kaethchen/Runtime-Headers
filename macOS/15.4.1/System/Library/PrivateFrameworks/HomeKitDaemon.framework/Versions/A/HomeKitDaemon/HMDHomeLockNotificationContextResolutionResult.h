@class NSUUID, NSString;

@interface HMDHomeLockNotificationContextResolutionResult : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) NSString *label;
@property (readonly, copy) NSUUID *labelIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithUserUUID:(id)a0 label:(id)a1 labelIdentifier:(id)a2;

@end
