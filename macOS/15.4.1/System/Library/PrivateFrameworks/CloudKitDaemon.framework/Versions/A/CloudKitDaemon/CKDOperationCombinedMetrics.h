@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (readonly, copy, nonatomic) CKDOperationMetrics *MMCSMetrics;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithCloudKitMetrics:(id)a0 andMMCSMetrics:(id)a1;

@end
