@class NSString;

@interface VNPixelBufferObservation : VNObservation

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } croppedBoundingBox;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (struct __CVBuffer { } *)createPixelBufferInOrientation:(unsigned int)a0 error:(id *)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 featureName:(id)a1 CVPixelBuffer:(struct __CVBuffer { } *)a2;
- (id)vn_cloneObject;

@end
