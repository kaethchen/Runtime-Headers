@class NSData, NSString;

@interface ADWarperMeshLensDistortionModel : NSObject <ADLensDistortionModel> {
    struct ADWarperMesh { unsigned long long _type; struct CGSize { double width; double height; } _refDimensions; NSData *_warperMesh; float _typeOffset; int _offsetX; int _offsetY; void /* unknown type, empty encoding */ _cropOrigin; int _width; int _height; } _undistortMesh;
    struct ADWarperMesh { unsigned long long _type; struct CGSize { double width; double height; } _refDimensions; NSData *_warperMesh; float _typeOffset; int _offsetX; int _offsetY; void /* unknown type, empty encoding */ _cropOrigin; int _width; int _height; } _distortMesh;
}

@property (readonly) unsigned long long type;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly, retain) NSData *warperMesh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (void)scale:(float)a0;
- (id)dictionaryRepresentation:(BOOL)a0;
- (void)adjustForImageRotation:(long long)a0 forDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initWithWarperMesh:(id)a0 type:(unsigned long long)a1 width:(long long)a2 height:(long long)a3;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;

@end
