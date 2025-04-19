@class NSNumber;

@interface CTLazuliSuggestedActionShowCoordinates : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct SuggestedActionShowCoordinates { double x0; double x1; } *)a0;
- (BOOL)isEqualToCTLazuliSuggestedActionShowCoordinates:(id)a0;

@end
