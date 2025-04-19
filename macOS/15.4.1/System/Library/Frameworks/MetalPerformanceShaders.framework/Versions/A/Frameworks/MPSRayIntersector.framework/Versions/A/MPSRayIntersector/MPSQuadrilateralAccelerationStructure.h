@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure

@property (nonatomic) unsigned long long quadrilateralCount;

- (id)initWithDevice:(id)a0;
- (id)vertexBuffer;
- (void)setPolygonType:(unsigned long long)a0;
- (id)initWithGroup:(id)a0;

@end
