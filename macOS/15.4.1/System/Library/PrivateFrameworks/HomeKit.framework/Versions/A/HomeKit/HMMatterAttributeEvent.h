@class NSNumber, HMAccessory;
@protocol NSCopying;

@interface HMMatterAttributeEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *attributeID;
@property (readonly, nonatomic) NSNumber *clusterID;
@property (readonly, nonatomic) NSNumber *endpointID;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, copy, nonatomic) id<NSCopying> triggerValue;

+ (id)new;
+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTriggerValue:(id)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithAttributeID:(id)a0 clusterID:(id)a1 endpointID:(id)a2 accessory:(id)a3 triggerValue:(id)a4;
- (id)initWithDict:(id)a0 attributeID:(id)a1 clusterID:(id)a2 endpointID:(id)a3 accessory:(id)a4 triggerValue:(id)a5;
- (BOOL)mergeFromNewObject:(id)a0;

@end
