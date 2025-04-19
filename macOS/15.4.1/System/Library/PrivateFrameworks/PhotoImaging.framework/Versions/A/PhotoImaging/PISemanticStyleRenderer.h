@class CMISmartStyleMetalRendererV1, FigMetalContext;
@protocol MTLCommandQueue;

@interface PISemanticStyleRenderer : NSObject {
    FigMetalContext *_ctx;
    unsigned long long _sid;
}

@property (readonly, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) int processingType;
@property (readonly, nonatomic) BOOL useStyleEngine;
@property (readonly, nonatomic) CMISmartStyleMetalRendererV1 *processor;

+ (BOOL)usingSharedSemanticStyleRendererWithMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(BOOL)a2 perform:(id /* block */)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(BOOL)a2;
- (BOOL)matchesMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(BOOL)a2;
- (BOOL)prepareProcessor;

@end
