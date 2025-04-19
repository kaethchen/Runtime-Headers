@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest

@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float faceCoreKalmanFilter;

+ (unsigned long long)defaultRevision;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (id)publicRevisionsSet;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithDetectedObjectObservation:(id)a0;
- (void)populateDetectorProcessingOptions:(id)a0 session:(id)a1;

@end
