@class NSArray;

@interface MADVIFaceResult : MADResult

@property (readonly, nonatomic) NSArray *faceRectanglesObservations;
@property (readonly, nonatomic) NSArray *faceprintObservations;
@property (readonly, nonatomic) NSArray *faceAttributesObservations;
@property (readonly, nonatomic) NSArray *faceExpressionsObservations;
@property (readonly, nonatomic) NSArray *faceLandmarksObservations;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)executionTimeInterval;
- (unsigned long long)executionNanoseconds;
- (void)setFaceExpressionsObservations:(id)a0;
- (void)setFaceAttributesObservations:(id)a0;
- (void)setFaceLandmarksObservations:(id)a0;
- (void)setFaceRectanglesObservations:(id)a0;
- (void)setFaceprintObservations:(id)a0;

@end
