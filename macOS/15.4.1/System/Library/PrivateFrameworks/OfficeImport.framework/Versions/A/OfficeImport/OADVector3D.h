@interface OADVector3D : NSObject <NSCopying> {
    float mDx;
    float mDy;
    float mDz;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)dx;
- (float)dy;
- (float)dz;
- (id)initWithDx:(float)a0 dy:(float)a1 dz:(float)a2;

@end
