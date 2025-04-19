@class NUBrushStrokeMaskIntersector, PIInpaintMask;

@interface _CleanupSegmentInfo : NSObject

@property (nonatomic) long long segmentIndex;
@property (retain, nonatomic) NUBrushStrokeMaskIntersector *intersector;
@property (retain, nonatomic) PIInpaintMask *mask;
@property (nonatomic) BOOL usingTargetPoints;
@property (nonatomic) BOOL isWire;

- (void).cxx_destruct;

@end
