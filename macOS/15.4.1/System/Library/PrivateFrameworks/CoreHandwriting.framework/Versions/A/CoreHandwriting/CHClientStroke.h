@class NSString, CHEncodedStrokeIdentifier;
@protocol CHStrokeIdentifier;

@interface CHClientStroke : NSObject <CHStroke> {
    struct CHClientStrokePoint { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; } *_points;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) unsigned long long pointsCapacity;
@property (nonatomic) unsigned long long pointsCount;
@property (retain, nonatomic) CHEncodedStrokeIdentifier *encodedStrokeIdentifier;
@property (nonatomic) unsigned long long strokeAttributes;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<CHStrokeIdentifier> strokeIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strokeIdentifierWithIdentifier:(long long)a0;
+ (id)encodedStrokeIdentifierWithIdentifier:(long long)a0;
+ (id)encodedStrokeIdentifierWithStrokeIdentifier:(id)a0;
+ (void)setStrokeIdentifierOffset:(long long)a0;
+ (long long)strokeIdentifierOffset;
+ (id)strokesFromDrawing:(id)a0 classification:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addPoint:(struct CHClientStrokePoint { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; })a0;
- (struct CHClientStrokePoint { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; })pointAtIndex:(long long)a0;
- (void)_expandPointsArrayIfNeeded;
- (double)_strokePathLength;
- (void)addAllPoints:(struct CHClientStrokePoint { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; } *)a0 count:(long long)a1;
- (void)enumeratePointsWithDistanceStep:(double)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePointsWithTimestep:(double)a0 usingBlock:(id /* block */)a1;
- (id)initWithAllPoints:(struct CHClientStrokePoint { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; } *)a0 pointCount:(long long)a1 type:(long long)a2;
- (id)initWithArray:(id)a0 channels:(id)a1 withTimeOffset:(double)a2 type:(long long)a3;
- (id)newStrokeWithTransformation:(id /* block */)a0;
- (id)newStrokeWithoutTransformation;

@end
