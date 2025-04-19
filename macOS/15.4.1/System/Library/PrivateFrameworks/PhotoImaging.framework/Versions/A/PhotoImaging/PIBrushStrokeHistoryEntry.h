@class NUBrushStroke;

@interface PIBrushStrokeHistoryEntry : NSObject

@property (nonatomic) unsigned long long entryType;
@property (retain, nonatomic) NUBrushStroke *brushStroke;
@property (nonatomic) BOOL closedShape;
@property (nonatomic) BOOL skipSegmentationIntersections;
@property (nonatomic) BOOL needsFacePixellation;
@property (nonatomic) struct CGPoint { double x; double y; } objectRemovalPoint;
@property (nonatomic) double subjectHitTestRadius;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithObjectRemovalAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithStroke:(id)a0 closed:(BOOL)a1 skipSegmentationIntersections:(BOOL)a2 needsFacePixellation:(BOOL)a3 subjectHitTestRadius:(double)a4;

@end
