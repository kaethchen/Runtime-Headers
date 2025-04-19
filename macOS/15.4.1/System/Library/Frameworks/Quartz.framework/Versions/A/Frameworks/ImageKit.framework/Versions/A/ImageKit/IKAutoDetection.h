@class IKScannerDeviceViewHandler, NSMutableArray;

@interface IKAutoDetection : NSObject {
    IKScannerDeviceViewHandler *_scannerViewHandler;
    unsigned long long _rhoRange;
    unsigned long long _thetaSize;
    unsigned long long _width;
    unsigned long long _height;
    NSMutableArray *_houghResults;
    int _houghResultsCount;
    unsigned long long _houghBufferSize;
    double _imageScale;
}

- (void)dealloc;
- (void)cleanup;
- (id)doStartSimpleScanAreaDetection:(struct CGImage { } *)a0;
- (struct CGImage { } *)cleanedupImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)copyCleanedupImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0;
- (id)doStartScanAreaDetection:(struct CGImage { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })doStartSimpleFrameDetection:(struct CGImage { } *)a0;
- (id)doStartSimpleFrameDetection:(struct CGImage { } *)a0 templateRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (void)enterAutoDetection:(int)a0 image:(struct CGImage { } *)a1;
- (void)exitAutoDetection:(int)a0;
- (struct CGPoint { double x0; double x1; })findIntersection:(int)a0 index2:(int)a1;
- (id)initWithScannerViewHandler:(id)a0;
- (void)removeNestedAreas:(id)a0;
- (void)startScanAreaDetection:(struct CGImage { } *)a0 completion:(id /* block */)a1;
- (void)startSimpleFrameDetection:(struct CGImage { } *)a0 completion:(id /* block */)a1;
- (void)startSimpleFrameDetection:(struct CGImage { } *)a0 templateRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)startSimpleScanAreaDetection:(struct CGImage { } *)a0 completion:(id /* block */)a1;

@end
