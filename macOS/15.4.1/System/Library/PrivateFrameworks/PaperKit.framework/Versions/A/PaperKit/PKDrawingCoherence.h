@class NSString, NSArray;
@protocol PKDrawingVersion, PKDrawingUUID;

@interface PKDrawingCoherence : PKDrawing {
    void /* unknown type, empty encoding */ model;
}

@property (class, nonatomic, readonly) NSString *fileType;

@property (nonatomic, readonly) Class strokeClass;
@property (nonatomic, readonly) Class strokeSelectionClass;
@property (nonatomic, readonly) id<PKDrawingVersion> version;
@property (nonatomic, readonly) long long requiredContentVersion;
@property (nonatomic, readonly) NSArray *_rootStrokes;
@property (nonatomic, readonly) long long _rootStrokesCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) id<PKDrawingUUID> uuid;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _canvasBounds;
@property (nonatomic, readonly) BOOL shouldClearSelectionAfterStraightening;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)_strokeForIdentifier:(id)a0;
- (void)addNewStroke:(id)a0;
- (id)copyWithoutInternalStrokes;
- (void)deleteStrokes:(id)a0;
- (id)drawingByApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)drawingByApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 transformInk:(BOOL)a1;
- (id)initWithData:(id)a0 loadNonInkingStrokes:(BOOL)a1 error:(id *)a2;
- (id)initWithDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 fromDrawing:(id)a1;
- (void)invalidateVisibleStrokes;
- (unsigned long long)mergeWithDrawing:(id)a0;
- (id)newStroke;
- (id)serializeTransiently;
- (id)serializeWithVersion:(long long)a0;
- (id)setStroke:(id)a0 hidden:(BOOL)a1;
- (void)setStrokes:(id)a0 groupID:(id)a1;
- (void)setStrokes:(id)a0 hidden:(BOOL)a1;
- (void)setStrokes:(id)a0 inks:(id)a1;
- (id)transformStrokes:(id)a0 paths:(id)a1 masks:(id)a2;
- (void)transformStrokes:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (id)undoableAddNewStrokes:(id)a0;
- (id)undoableAddNewStrokes:(id)a0 replacingOldStrokes:(id)a1;
- (id)undoableDeleteStrokes:(id)a0;
- (id)undoableMergeWithDrawing:(id)a0;
- (id)undoableSetStrokes:(id)a0 groupID:(id)a1 actionName:(id)a2;
- (id)undoableSetStrokes:(id)a0 inks:(id)a1;
- (id)undoableTransformStrokes:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (id)updateFromSlicedIntersectingIndexes:(long long *)a0 resultNewRoots:(const id *)a1 resultUpdatedStrokes:(const id *)a2 count:(long long)a3;
- (void)updateStroke:(id)a0 indexHint:(long long)a1;
- (id)visibleStrokeForInsertingStroke:(id)a0;

@end
