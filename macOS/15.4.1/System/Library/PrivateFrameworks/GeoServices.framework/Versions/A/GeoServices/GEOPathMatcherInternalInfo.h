@class NSString, NSArray;

@interface GEOPathMatcherInternalInfo : NSObject {
    NSString *_base64Path;
    NSArray *_matchedSegments;
    struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } _range;
}

@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; } range;
@property (readonly, nonatomic) NSString *base64Path;
@property (readonly, nonatomic) NSArray *matchedSegments;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
