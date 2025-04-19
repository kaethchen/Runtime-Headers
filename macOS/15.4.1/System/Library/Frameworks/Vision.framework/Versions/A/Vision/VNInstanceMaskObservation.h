@class NSIndexSet, _VNInstanceMaskObservationMaskProductionResources, NSArray, _VNLowResAlphaMask;

@interface VNInstanceMaskObservation : VNObservation <VNObjectDeepCloning> {
    _VNLowResAlphaMask *_lowResAlphaMask;
    unsigned long long _numComponents;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    _VNInstanceMaskObservationMaskProductionResources *_maskProductionResources_DO_NOT_DIRECTLY_ACCESS;
    NSArray *_instanceSegmentationMaskFeatureMap;
    NSArray *_instanceCategoriesMap;
}

@property (readonly, nonatomic) struct __CVBuffer { } *instanceMask;
@property (readonly, copy) NSIndexSet *allInstances;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __CVBuffer { } *)generateMaskForInstances:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)createMaskForInstances:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)createMatteForImageForInstances:(id)a0 fromRequestHandler:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)createMattedImageForInstances:(id)a0 fromRequestHandler:(id)a1 inPlace:(BOOL)a2 croppedToInstancesExtent:(BOOL)a3 error:(id *)a4;
- (struct __CVBuffer { } *)createMattedImageOfInstances:(id)a0 fromRequestHandler:(id)a1 croppedToInstancesExtent:(BOOL)a2 error:(id *)a3;
- (struct __CVBuffer { } *)generateMaskedImageOfInstances:(id)a0 fromRequestHandler:(id)a1 croppedToInstancesExtent:(BOOL)a2 error:(id *)a3;
- (struct __CVBuffer { } *)generateMaskedImageOfInstances:(id)a0 fromRequestHandler:(id)a1 inPlace:(BOOL)a2 croppedToInstancesExtent:(BOOL)a3 error:(id *)a4;
- (struct __CVBuffer { } *)generateMaskedImageOfInstances:(id)a0 fromRequestHandler:(id)a1 inPlace:(BOOL)a2 croppedToInstancesExtent:(BOOL)a3 returnCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 error:(id *)a5;
- (struct __CVBuffer { } *)generateMaskedImageOfInstances:(id)a0 imageBuffer:(id)a1 inPlace:(BOOL)a2 croppedToInstancesExtent:(BOOL)a3 error:(id *)a4;
- (struct __CVBuffer { } *)generateScaledMaskForImageForInstances:(id)a0 fromRequestHandler:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)generateScaledMaskForImageForInstances:(id)a0 imageBuffer:(id)a1 croppedToInstancesExtent:(BOOL)a2 error:(id *)a3;
- (id)initWithOriginatingRequestSpecifier:(id)a0 instanceLowResMaskArray:(id)a1 instanceFeatureKeyIndexMap:(id)a2 instanceCategoryKeyIndexMap:(id)a3 instanceMask:(struct __CVBuffer { } *)a4 numComponents:(unsigned long long)a5 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;
- (id)initWithOriginatingRequestSpecifier:(id)a0 instanceLowResMaskArray:(id)a1 instanceMask:(struct __CVBuffer { } *)a2 numComponents:(unsigned long long)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithOriginatingRequestSpecifier:(id)a0 lowResMask:(struct __CVBuffer { } *)a1 instanceMask:(struct __CVBuffer { } *)a2 numComponents:(unsigned long long)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)instanceAtPoint:(struct CGPoint { double x0; double x1; })a0 error:(id *)a1;
- (id)instancesForCategory:(id)a0 error:(id *)a1;
- (id)instancesForFeature:(id)a0 error:(id *)a1;
- (id)vn_cloneObject;
- (id)vn_deepCloneObjectWithError:(id *)a0;

@end
