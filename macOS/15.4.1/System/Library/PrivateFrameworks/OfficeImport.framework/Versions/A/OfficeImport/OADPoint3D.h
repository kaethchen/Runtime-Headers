@interface OADPoint3D : NSObject <NSCopying> {
    float mX;
    float mY;
    float mZ;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)x;
- (float)z;
- (float)y;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;

@end
