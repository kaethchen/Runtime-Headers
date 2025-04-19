@class NSData, NSString, NSArray, CHStrokeClutterFilter, CHStrokeClassificationResult, NSDictionary, CHRecognitionSessionAutoRefineResult, NSSet, CHStrokeGroupingResult;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_recognitionResultsByGroupID;
    NSDictionary *_rawRecognitionResultsByGroupID;
    NSDictionary *_textCorrectionResultsByGroupID;
    NSDictionary *_cachedRecognitionResultsFromPostProcessing;
    long long __transcriptionCapability;
    NSData *_encodedStrokeProviderVersion;
    NSSet *_declaredVariables;
    long long _completeness;
    BOOL __shouldUseCachedCompleteness;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly, nonatomic) NSArray *orderedStrokeIdentifiers;
@property (readonly, nonatomic) long long sessionMode;
@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, copy, nonatomic) NSArray *preferredLocales;
@property (readonly, nonatomic) CHStrokeClutterFilter *clutterFilter;
@property (readonly, nonatomic) long long recognitionEnvironment;
@property (readonly, nonatomic) CHStrokeClassificationResult *rawStrokeClassificationResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *rawStrokeGroupingResult;
@property (readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *unprocessedStrokeGroupingResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult;
@property (readonly, nonatomic) NSArray *autoRefineResults;
@property (readonly, nonatomic) CHRecognitionSessionAutoRefineResult *lastAutoRefineResult;
@property (readonly, nonatomic) struct { double strokeClutterFilteringDuration; double strokeClassificationDuration; double groupingDuration; double recognitionDuration; double principalLinesDuration; double totalDuration; } generationDuration;
@property (readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property (readonly, nonatomic) NSString *allResultsDebugDescription;
@property (readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;

+ (id)loadFromFile:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)writeToFile;
- (id)declaredVariables;
- (id)allMathResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)a0;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)a0;
- (id)cachedRecognitionResultsFromPostProcessing;
- (long long)completeness;
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)a0 partiallyCoveredStrokeGroups:(id)a1 drawingCanvasSize:(struct CGSize { double x0; double x1; })a2;
- (id)encodedStrokeProviderVersion;
- (id)forcedCachedContextualResultCoveringStrokes:(id)a0;
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)a0 partiallyCoveredStrokeGroups:(id *)a1;
- (id)initWithResult:(id)a0 validStrokes:(id)a1;
- (id)initWithStrokeProviderVersion:(id)a0 encodedStrokeProviderVersion:(id)a1 orderedStrokeIdentifiers:(id)a2 sessionMode:(long long)a3 locales:(id)a4 preferredLocales:(id)a5 declaredVariables:(id)a6 clutterFilter:(id)a7 strokeClassificationResult:(id)a8 rawStrokeClassificationResult:(id)a9 strokeGroupingResult:(id)a10 rawStrokeGroupingResult:(id)a11 unprocessedStrokeGroupingResult:(id)a12 recognitionResults:(id)a13 rawRecognitionResults:(id)a14 inlineContinuousModeResults:(id)a15 autoRefineResults:(id)a16 lastAutoRefineResult:(id)a17 generationDuration:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a18 recognitionEnvironment:(long long)a19;
- (BOOL)isEqualToSerializableRecognitionSessionResult:(id)a0;
- (BOOL)isValidForStrokes:(id)a0;
- (id)rawRecognitionResultForStrokeGroupIdentifier:(long long)a0;
- (id)rawRecognitionResultsByGroupID;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)a0;
- (id)recognitionResultsByGroupID;
- (void)setCachedRecognitionResultsFromPostProcessing:(id)a0;
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)a0;
- (id)textCorrectionResultsByGroupID;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
