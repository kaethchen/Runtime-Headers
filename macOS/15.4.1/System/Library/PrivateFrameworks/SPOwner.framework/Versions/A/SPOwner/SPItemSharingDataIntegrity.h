@class NSArray;

@interface SPItemSharingDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *ownedCircles;
@property (copy, nonatomic) NSArray *memberCircles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOwnedCircles:(id)a0 memberCircles:(id)a1;

@end
