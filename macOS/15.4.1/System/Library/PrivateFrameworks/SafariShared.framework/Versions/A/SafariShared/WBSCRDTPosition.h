@class NSArray, NSDictionary;

@interface WBSCRDTPosition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sortValues;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)positionBetweenPosition:(id)a0 andPosition:(id)a1 withDeviceIdentifier:(id)a2 changeID:(long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSortValue:(id)a0 parentSortValues:(id)a1;
- (id)initWithSortValues:(id)a0;

@end
