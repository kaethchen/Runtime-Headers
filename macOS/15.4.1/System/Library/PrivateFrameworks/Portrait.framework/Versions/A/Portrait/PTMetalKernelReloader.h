@class NSString, NSMutableDictionary;
@protocol MTLDevice;

@interface PTMetalKernelReloader : NSObject {
    NSMutableDictionary *_pipelineByName;
    NSMutableDictionary *_fileWatch;
    NSMutableDictionary *_fileHeaderWatch;
    NSString *_searchPath;
    id<MTLDevice> _device;
    NSMutableDictionary *_headerLocationCache;
}

- (void).cxx_destruct;
- (BOOL)checkForUpdate;
- (void)findAllMetalFilesIn:(id)a0 metalFiles:(id)a1;
- (id)createComputePipelineState:(id)a0 functionName:(id)a1 functionConstants:(id)a2 error:(id *)a3;
- (id)findAllMetalFiles;
- (id)findHeader:(id)a0 path:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 device:(id)a1;
- (id)preprocessHeaderFiles:(id)a0 includedFiles:(id)a1 error:(id *)a2;
- (BOOL)recompileFile:(id)a0 error:(id *)a1;

@end
