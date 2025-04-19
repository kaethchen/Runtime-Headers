@class NSArray;

@interface VKVectorOverlayMaskingPolygonGroup : VKVectorOverlayData

@property (readonly, nonatomic) NSArray *polygons;
@property (nonatomic) long long fillMode;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)initWithPolygons:(id)a0;

@end
