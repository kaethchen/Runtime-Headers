@interface NSBlock : NSObject <NSCopying>

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)invoke;
- (void)performAfterDelay:(double)a0;

@end
