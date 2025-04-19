@class VIReducePersonOverTriggerAnnotation, NSArray, VITextBlockAnnotation, VIScenenetAnnotation, VIBarcodeAnnotation;

@interface VIAnnotation : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *nsfwAnnotations;
@property (readonly, nonatomic) NSArray *faceAnnotations;
@property (readonly, nonatomic) NSArray *humanAnnotations;
@property (readonly, nonatomic) VITextBlockAnnotation *textBlockAnnotation;
@property (readonly, nonatomic) VIScenenetAnnotation *scenenetAnnotation;
@property (readonly, nonatomic) VIBarcodeAnnotation *barcodeAnnotation;
@property (readonly, nonatomic) VIReducePersonOverTriggerAnnotation *reducePersonOverTriggerAnnotation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReducePersonOverTriggerAnnotation:(id)a0 faceAnnotations:(id)a1 humanAnnotations:(id)a2 nsfwAnnotations:(id)a3 textBlockAnnotation:(id)a4 scenenetAnnotation:(id)a5 barcodeAnnotation:(id)a6;
- (id)initWithAnnotations:(id)a0 humanAnnotations:(id)a1 nsfwAnnotations:(id)a2 textBlockAnnotation:(id)a3;
- (id)initWithFaceAnnotations:(id)a0 humanAnnotations:(id)a1 nsfwAnnotations:(id)a2 textBlockAnnotation:(id)a3 scenenetAnnotation:(id)a4 barcodeAnnotation:(id)a5;
- (id)initWithTextAnnotations:(id)a0;

@end
