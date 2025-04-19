@class NSMutableDictionary;
@protocol MTLLibrary, MTLDevice;

@interface AVTMetalHelper : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_functions;
    NSMutableDictionary *_renderPipelineStates;
    NSMutableDictionary *_computePipelineStates;
}

- (void).cxx_destruct;
- (id)_initWithDevice:(id)a0;
- (id)_locked_computePipelineStateWithFunctionName:(id)a0;
- (id)_locked_functionNamed:(id)a0;
- (void)_locked_instanciateLibraryIfNeeded;
- (id)_locked_renderPipelineStateWithDescriptor:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; id x9; id x10; unsigned long long x11; })a0 hashNumber:(id)a1;

@end
