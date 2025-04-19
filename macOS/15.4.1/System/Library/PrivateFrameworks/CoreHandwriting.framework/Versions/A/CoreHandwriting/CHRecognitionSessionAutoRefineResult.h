@class CHTokenizedTextResult, NSArray, NSIndexSet, CHStrokeGroup, CHDrawing, CHStrokeGroupRecognitionResult;

@interface CHRecognitionSessionAutoRefineResult : NSObject

@property (readonly, copy, nonatomic) CHStrokeGroup *strokeGroup;
@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSArray *tokenOriginalBounds;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) CHStrokeGroupRecognitionResult *strokeGroupResult;
@property (readonly, copy, nonatomic) NSIndexSet *refinedTokenColumns;
@property (readonly, copy, nonatomic) CHDrawing *drawing;
@property (readonly, copy, nonatomic) NSIndexSet *syntheticStrokeIndexes;

- (void).cxx_destruct;
- (id)initWithStrokeGroupResult:(id)a0 strokeGroup:(id)a1 textResult:(id)a2 refinedColumns:(id)a3 strokeProvider:(id)a4;

@end
