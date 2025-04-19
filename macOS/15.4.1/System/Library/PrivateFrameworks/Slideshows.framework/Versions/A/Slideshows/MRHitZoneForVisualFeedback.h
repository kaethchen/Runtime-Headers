@interface MRHitZoneForVisualFeedback : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasEnded;
@property (readonly) float *vertices;
@property (readonly) unsigned long long countOfVertices;

- (void)dealloc;
- (void)set2DVertices:(const float *)a0 countOfVertices:(unsigned long long)a1;

@end
