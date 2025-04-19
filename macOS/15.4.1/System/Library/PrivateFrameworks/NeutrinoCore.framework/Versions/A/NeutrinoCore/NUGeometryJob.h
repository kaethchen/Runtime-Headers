@interface NUGeometryJob : NURenderJob

- (id)result;
- (id)geometryRequest;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;

@end
