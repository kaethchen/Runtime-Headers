@class NSUUID, NSString, NSURL, NSArray;

@interface HMHomeWalletKey : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSURL *customURL;
@property (readonly, getter=isExpressEnabled) BOOL expressEnabled;
@property (readonly, getter=isUWBUnlockEnabled) BOOL uwbUnlockEnabled;
@property (readonly) long long color;
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
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 customURL:(id)a1 expressEnabled:(BOOL)a2 uwbUnlockEnabled:(BOOL)a3 color:(long long)a4;

@end
