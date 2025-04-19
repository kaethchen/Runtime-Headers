@interface IDSMPIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) void *backingValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithBackingValue:(void *)a0;

@end
