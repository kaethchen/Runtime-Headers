@class NSArray, NSDictionary;

@interface VNANFDMultiDetectorANODv5 : VNANFDMultiDetectorANODv4

@property (class, readonly) NSArray *knownAnimalFaceIdentifiers;
@property (class, readonly) NSDictionary *recognizedAnimalFaceObjectClassToAnimalFaceCategoryName;

+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (Class)detectorClass;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:(id)a0;

- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 objectGroupId:(id)a3 imageBuffer:(id)a4 qosClass:(unsigned int)a5 session:(id)a6 warningRecorder:(id)a7 detectedObjectResults:(id)a8 error:(id *)a9;
- (id)splitDetectedClassResultsIntoSubclasses:(id)a0;

@end
