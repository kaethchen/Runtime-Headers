@interface TRIFBBoxedDouble : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedDouble { double x0; } *cppPointer;
@property (readonly, nonatomic) double val;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init_;
- (id)initWithVal:(double)a0;

@end
