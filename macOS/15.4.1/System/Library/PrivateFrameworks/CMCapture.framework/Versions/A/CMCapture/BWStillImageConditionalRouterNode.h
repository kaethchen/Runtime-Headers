@class BWStillImageConditionalRouterConfiguration;

@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    BWStillImageConditionalRouterConfiguration *_configuration;
}

+ (void)initialize;

- (void)dealloc;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithRoutingConfiguration:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
