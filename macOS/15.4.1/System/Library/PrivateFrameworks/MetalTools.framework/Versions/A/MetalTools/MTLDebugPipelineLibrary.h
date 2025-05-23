@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary

@property (copy, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)initWithLibrary:(id)a0 parent:(id)a1 filePath:(id)a2;
- (id)newComputePipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newRenderPipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;

@end
