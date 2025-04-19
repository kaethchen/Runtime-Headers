@class NSString;
@protocol NURenderStatistics, NUImageBuffer;

@interface _NUVisionForegroundIsolationSegmentationResult : _NURenderResult <NUVisionForegroundIsolationSegmentationResult>

@property (readonly, nonatomic) id<NUImageBuffer> maskBuffer;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMaskBuffer:(id)a0;

@end
