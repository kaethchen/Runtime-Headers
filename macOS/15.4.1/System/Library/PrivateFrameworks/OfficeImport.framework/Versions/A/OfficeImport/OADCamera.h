@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)rotation;
- (void)setRotation:(id)a0;
- (void)setZoom:(float)a0;
- (float)zoom;
- (int)cameraType;
- (void)setCameraType:(int)a0;
- (float)fieldOfView;
- (void)setFieldOfView:(float)a0;

@end
