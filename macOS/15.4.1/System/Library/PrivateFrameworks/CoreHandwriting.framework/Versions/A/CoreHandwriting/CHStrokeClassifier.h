@protocol CHStrokeProvider;

@interface CHStrokeClassifier : NSObject

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) long long forcedStrokeClass;

+ (double)containerSupportForPoints:(const void *)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (long long)fallbackTextScriptClassificationForMathGroup:(id)a0 strokeClassificationResult:(id)a1 fromTopNCandidate:(long long)a2;
+ (id)nonTextCandidateForStroke:(id)a0 withSubstrokes:(id)a1;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 forceClass:(long long)a1;
- (id)refineResult:(id)a0 usingSortedTextStrokeGroups:(id)a1 cancellationBlock:(id /* block */)a2;
- (id)refineResult:(id)a0 usingStrokeClassificationModel:(id)a1 sortedAddedStrokes:(id)a2 removedStrokeIdentifiers:(id)a3 lastResult:(id)a4 cancellationBlock:(id /* block */)a5;
- (id)updateResult:(id)a0 addingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 clutterFilter:(id)a3 affectedClutterStrokeIDs:(id)a4 cancellationBlock:(id /* block */)a5;

@end
