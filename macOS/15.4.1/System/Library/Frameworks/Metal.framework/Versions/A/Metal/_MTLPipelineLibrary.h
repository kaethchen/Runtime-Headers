@class NSString, NSArray;
@protocol MTLDevice, MTLPipelineCache;

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {
    void *_pipelineLibraryData;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property BOOL disableRunTimeCompilation;
@property (readonly, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (readonly, nonatomic) id<MTLPipelineCache> functionCache;
@property (readonly) NSArray *metallibPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)functionCache;
- (id)newComputePipelineDescriptorWithName:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newRenderPipelineDescriptorWithName:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)pipelineCache;
- (id)initWithDevice:(id)a0 pipelineLibraryData:(void *)a1;

@end
