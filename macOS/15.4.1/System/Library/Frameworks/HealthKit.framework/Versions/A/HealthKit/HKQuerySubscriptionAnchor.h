@class NSNumber;

@interface HKQuerySubscriptionAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *dataAnchor;
@property (readonly, copy, nonatomic) NSNumber *associationAnchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataAnchor:(id)a0 associationAnchor:(id)a1;
- (void)updateAssociationAnchor:(id)a0;
- (void)updateDataAnchor:(id)a0;

@end
