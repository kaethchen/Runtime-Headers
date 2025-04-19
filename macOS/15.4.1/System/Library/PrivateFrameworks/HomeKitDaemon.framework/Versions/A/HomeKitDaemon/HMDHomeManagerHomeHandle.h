@class NSUUID;

@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *backingStoreUUID;
@property (readonly) NSUUID *homeUUID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithBackingStoreUUID:(id)a0 homeUUID:(id)a1;

@end
