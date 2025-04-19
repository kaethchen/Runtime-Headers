@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)rotation;
- (int)direction;
- (void)setDirection:(int)a0;
- (void)setRotation:(id)a0;

@end
