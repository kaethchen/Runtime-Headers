@class NSString, CHGroupingModel, CHFastStrokeGroupingStrategy;

@interface CHMathStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSString *_strategyIdentifier;
    CHFastStrokeGroupingStrategy *_fastGroupingStrategy;
    CHGroupingModel *_model;
}

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 strokeGroupingModel:(id)a1;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4 replacementStrokeGroup:(id *)a5;
- (id)strategyIdentifier;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;

@end
