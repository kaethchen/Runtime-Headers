@interface NUExportJob : NURenderJob

- (id)result;
- (id)initWithRequest:(id)a0;
- (id)exportRequest;
- (id)initWithExportRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;

@end
