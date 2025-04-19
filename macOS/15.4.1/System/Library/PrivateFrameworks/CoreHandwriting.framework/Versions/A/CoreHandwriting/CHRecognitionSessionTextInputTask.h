@class NSArray, CHTextInputQuery;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (readonly, nonatomic) NSArray *initialTextInputTargets;
@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery;

- (void).cxx_destruct;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 strokeProvider:(id)a1 initialTextInputTargets:(id)a2 inputResult:(id)a3 recognitionEnvironment:(long long)a4 calculateDocumentProvider:(id)a5;
- (id)initWithSessionMode:(long long)a0 locales:(id)a1 preferredLocales:(id)a2 strokeProvider:(id)a3 calculateDocumentProvider:(id)a4 inputResult:(id)a5 recognitionQOSClass:(unsigned int)a6 recognitionEnvironment:(long long)a7 isHighResponsivenessTask:(BOOL)a8 strokeClassificationModel:(id)a9 strokeGroupingModel:(id)a10 strokeGroupingRequirement:(long long)a11 principalLineRequirement:(long long)a12 subjectStrokeIdentifiers:(id)a13 subjectStrokeClassificationResult:(id)a14 recognitionOptions:(id)a15 partialResultBlock:(id /* block */)a16 wantsAutoRefine:(BOOL)a17;
- (id)newGroupingManager;
- (id)newGroupingPostProcessingManagerWithGroupingManager:(id)a0;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1 strokeGroupsToProcess:(id)a2 strokeClassificationResult:(id)a3 strokeGroupReplacements:(id *)a4;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
