@class NSUUID, NSString, NSData, NSArray, HMCHIPVendor;

@interface HMCHIPEcosystem : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) HMCHIPVendor *vendor;
@property (readonly, copy) NSString *name;
@property (readonly) BOOL owned;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRootPublicKey:(id)a0 vendor:(id)a1;
- (id)initWithRootPublicKey:(id)a0 vendor:(id)a1 owned:(BOOL)a2;

@end
