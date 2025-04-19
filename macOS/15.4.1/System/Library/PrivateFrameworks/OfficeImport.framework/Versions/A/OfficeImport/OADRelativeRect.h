@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (float)top;
- (float)bottom;
- (float)left;
- (float)right;
- (void)setLeft:(float)a0;
- (void)setRight:(float)a0;
- (void)setTop:(float)a0;
- (void)setBottom:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
