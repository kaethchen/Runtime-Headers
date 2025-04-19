@interface CTLazuliSuggestedActionRequestLocationPush : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL sendPush;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct SuggestedActionRequestLocationPush { BOOL x0; } *)a0;
- (BOOL)isEqualToCTLazuliSuggestedActionRequestLocationPush:(id)a0;

@end
