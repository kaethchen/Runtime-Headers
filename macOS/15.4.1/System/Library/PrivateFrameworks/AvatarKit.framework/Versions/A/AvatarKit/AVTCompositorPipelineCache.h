@class AVTMetalHelper, NSMutableDictionary;

@interface AVTCompositorPipelineCache : NSObject {
    AVTMetalHelper *_helper;
    NSMutableDictionary *_pipelines;
}

+ (id)pipelineForPropertyName:(id)a0 device:(id)a1;

- (void).cxx_destruct;
- (id)initWithMetalHelper:(id)a0;
- (id)pipelineForPropertyName:(id)a0;

@end
