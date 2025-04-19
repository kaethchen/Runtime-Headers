@interface VNImageAestheticsScoresObservation : VNObservation

@property (readonly, nonatomic) float aestheticScore;
@property (readonly, nonatomic) float failureScore;
@property (readonly, nonatomic) float junkNegativeScore;
@property (readonly, nonatomic) float junkTragicFailureScore;
@property (readonly, nonatomic) float poorQualityScore;
@property (readonly, nonatomic) float nonMemorableScore;
@property (readonly, nonatomic) float screenShotScore;
@property (readonly, nonatomic) float receiptOrDocumentScore;
@property (readonly, nonatomic) float textDocumentScore;
@property (readonly, nonatomic) BOOL isUtility;
@property (readonly, nonatomic) float overallScore;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationForOriginatingRequestSpecifier:(id)a0 isUtility:(BOOL)a1 overallScore:(float)a2 aestheticScore:(float)a3 failureScore:(float)a4 junkNegativeScore:(float)a5 junkTragicFailureScore:(float)a6 poorQualityScore:(float)a7 nonMemorableScore:(float)a8 screenShotScore:(float)a9 receiptOrDocumentScore:(float)a10 textDocumentScore:(float)a11 error:(id *)a12;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithOriginatingRequestSpecifier:(id)a0 isUtility:(BOOL)a1 overallScore:(float)a2 aestheticScore:(float)a3 failureScore:(float)a4 junkNegativeScore:(float)a5 junkTragicFailureScore:(float)a6 poorQualityScore:(float)a7 nonMemorableScore:(float)a8 screenShotScore:(float)a9 receiptOrDocumentScore:(float)a10 textDocumentScore:(float)a11;
- (id)vn_cloneObject;

@end
