@class NSString, FigMetalContext, MPSImageHistogramEqualization, FigRegWarpPPGPUShaders, MPSImageHistogram;
@protocol MTLTexture, MTLBuffer;

@interface FigRegWarpPPGPU : NSObject <CMIRegWarp> {
    FigMetalContext *_metal;
    FigRegWarpPPGPUShaders *_shaders;
    struct { unsigned int w; unsigned int h; } _pyramidLevelsDim[8];
    id<MTLTexture> _referencePyramidImage[8];
    id<MTLTexture> _nonReferencePyramidImage[8];
    id<MTLBuffer> _referencePyramidCorners[8];
    id<MTLBuffer> _nonReferencePyramidCorners[8];
    struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } _roi;
    struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } _pyramidLevelsRoi[8];
    struct { float normX[2]; float normY[2]; float inverseX[2]; float inverseY[2]; } _normCoefs[8];
    float _inlierThreshold[8];
    struct { void /* unknown type, empty encoding */ pixelPitchInMm; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; float forwardValidRadiusSqr; void /* unknown type, empty encoding */ sensorCropScaling; void /* unknown type, empty encoding */ sensorCropOffset; } _referenceGDCParams;
    struct { void /* unknown type, empty encoding */ pixelPitchInMm; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; float forwardValidRadiusSqr; void /* unknown type, empty encoding */ sensorCropScaling; void /* unknown type, empty encoding */ sensorCropOffset; } _nonReferenceGDCParams;
    struct { unsigned long long numberOfHistogramEntries; BOOL histogramForAlpha; void /* unknown type, empty encoding */ minPixelValue; void /* unknown type, empty encoding */ maxPixelValue; } _mpsHistCfg;
    MPSImageHistogram *_mpsHist;
    MPSImageHistogramEqualization *_mpsHistEq;
    struct { struct { unsigned int w; unsigned int h; } dims; struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } roi; struct { float normX[2]; float normY[2]; float inverseX[2]; float inverseY[2]; } normCoef; float minNCCThreshold; float minCornerResponseThreshold; struct { void /* unknown type, empty encoding */ pixelPitchInMm; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; float forwardValidRadiusSqr; void /* unknown type, empty encoding */ sensorCropScaling; void /* unknown type, empty encoding */ sensorCropOffset; } refGDCParams; struct { void /* unknown type, empty encoding */ pixelPitchInMm; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; float forwardValidRadiusSqr; void /* unknown type, empty encoding */ sensorCropScaling; void /* unknown type, empty encoding */ sensorCropOffset; } nrfGDCParams; BOOL applyGDC; } _cornerMatchingParams;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    BOOL _skipInitialDownsample;
    unsigned int _ransacMinNumInliers;
    BOOL _allocateBuffersWithAllocator;
    BOOL _performHistEq;
    unsigned char _maxNumberOfPyramidLevels;
    BOOL _useHalfPrecisionCornerResponse;
    BOOL _normalizeCornerResponse;
    BOOL _isShaderHarvesting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
