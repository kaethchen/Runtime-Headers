@class MPSImageAreaMin, MPSImageAreaMax;

@interface UniMorphology : UniKernel {
    MPSImageAreaMin *kernelMin;
    MPSImageAreaMax *kernelMax;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)outputImage:(id)a0;
- (id)run:(id)a0;
- (int)_loadShaders:(id)a0;
- (id)outputNameArray;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extentForImage;
- (id)inputNameArray;

@end
