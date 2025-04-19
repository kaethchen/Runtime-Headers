@class NSURL, IKScannerDeviceViewHandler, IKNSelection;

@interface IKScanArea : NSObject

@property IKScannerDeviceViewHandler *scannerDeviceViewHandler;
@property struct CGImage { } *cgImage;
@property (copy) NSURL *scannedURL;
@property double angle0;
@property double angle1;
@property double angle2;
@property double angle3;
@property double rho0;
@property double rho1;
@property double rho2;
@property double rho3;
@property struct CGPoint { double x; double y; } pt0;
@property struct CGPoint { double x; double y; } pt1;
@property struct CGPoint { double x; double y; } pt2;
@property struct CGPoint { double x; double y; } pt3;
@property double angle;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanArea;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanAreaFlipped;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanAreaFlippedNonClipped;
@property int autoResolution;
@property int autoBitDepth;
@property int index;
@property BOOL shouldAutoScan;
@property BOOL scanComplete;
@property BOOL scanInProgress;
@property id extraStorage;
@property IKNSelection *selection;
@property (nonatomic) double scanProgressDone;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ikSelectionRect;
@property (readonly) struct CGPoint { double x; double y; } ikSelectionPosition;
@property (readonly) double ikSelectionAngle;
@property double overviewToFinalScaling;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (void)cleanup;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (void)createCGImageFromBuffer;
- (id)initWithIKNSelection:(id)a0;
- (id)initWithImage:(struct CGImage { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)simpleScanAreaDetection:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 top:(int)a1 bottom:(int)a2 left:(int)a3 right:(int)a4 validateResult:(BOOL)a5;
- (BOOL)simpleScanAreaDetection:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 validateResult:(BOOL)a1;
- (BOOL)update:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 imageIndex:(unsigned char)a1;
- (BOOL)validScanAreaForBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0;

@end
