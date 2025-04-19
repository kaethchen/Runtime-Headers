@interface REMDueDateDeltaInterval : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long unit;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)inverted;
- (id)addedTo:(id)a0;
- (id)initWithUnit:(long long)a0 count:(long long)a1;
- (id)initWithUnitInteger:(long long)a0 count:(long long)a1;

@end
