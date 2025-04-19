@class NSArray, NSString, NSMutableArray, PKInk;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    NSMutableArray *_secondaryBuffers;
    unsigned long long _totalCost;
    long long _renderZoomFactor;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly, nonatomic) NSArray *secondaryBuffers;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (void)addBuffer:(id)a0;
- (void)addSecondaryBuffer:(id)a0;
- (unsigned long long)cacheCost;
- (id)initWithDevice:(id)a0 ink:(id)a1 renderZoomFactor:(long long)a2;
- (BOOL)isCompatibleWithInk:(id)a0 renderZoomFactor:(long long)a1;
- (BOOL)needsCompute;

@end
