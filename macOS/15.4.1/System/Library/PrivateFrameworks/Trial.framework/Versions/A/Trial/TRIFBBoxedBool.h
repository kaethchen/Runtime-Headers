@interface TRIFBBoxedBool : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedBool { unsigned char x0; } *cppPointer;
@property (readonly, nonatomic) BOOL val;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init_;
- (id)initWithVal:(BOOL)a0;

@end
