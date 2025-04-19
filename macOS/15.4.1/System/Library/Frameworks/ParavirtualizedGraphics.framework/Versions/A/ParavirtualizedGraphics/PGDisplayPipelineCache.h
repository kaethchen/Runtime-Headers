@class NSMapTable;
@protocol MTLFunction, MTLDevice;

@interface PGDisplayPipelineCache : NSObject {
    id<MTLDevice> _mtlDevice;
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLFunction> _fragmentFunctionGammaColorMatrix;
    NSMapTable *_table;
}

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)pipelineForDescriptor:(id)a0;

@end
