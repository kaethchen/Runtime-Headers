@interface PARenderPipelineGeometry : NSObject

@property BOOL wantsCrop;
@property struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } inCropRect;
@property BOOL wantsStraighten;
@property double inStraightenAngleInDegreesCCW;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } straightenTransform;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rotateFlipTransform;
@property struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } preCrop;
@property struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } crop;
@property struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } extent;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inverseRotateFlipTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inverseStraightenTransform;

@end
