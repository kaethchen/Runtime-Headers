@class NSArray, NSString, NSMutableArray;

@interface PKMetalSDFPenRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    long long _renderZoomFactor;
    BOOL _purgeableBuffers;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (void)addBuffer:(id)a0;
- (unsigned long long)cacheCost;
- (id)initWithPurgeableBuffers:(BOOL)a0 renderZoomFactor:(long long)a1;
- (BOOL)isCompatibleWithInk:(id)a0 renderZoomFactor:(long long)a1;
- (BOOL)needsCompute;

@end
