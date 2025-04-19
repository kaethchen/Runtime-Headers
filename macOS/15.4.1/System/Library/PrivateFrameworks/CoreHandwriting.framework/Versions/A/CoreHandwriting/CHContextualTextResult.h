@class CHTokenizedTextResult, NSString, CHStrokeGroup, CHStrokeGroupRecognitionResult;

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) CHTokenizedTextResult *textResult;
@property (retain, nonatomic) CHStrokeGroup *strokeGroup;
@property (retain, nonatomic) NSString *terminatingSpecialCharacter;
@property (retain, nonatomic) CHStrokeGroupRecognitionResult *strokeGroupResult;

+ (id)defaultWordTerminationCharacterForLocale:(id)a0;

- (void).cxx_destruct;
- (BOOL)isNonTextCandidateForContextLookupByStrokeClassificationResult:(id)a0;
- (id)initWithTextResult:(id)a0 terminatingSpecialCharacter:(id)a1 strokeGroup:(id)a2;
- (BOOL)isMathForContextLookup;
- (BOOL)isNonTextCandidateForContextLookup;

@end
