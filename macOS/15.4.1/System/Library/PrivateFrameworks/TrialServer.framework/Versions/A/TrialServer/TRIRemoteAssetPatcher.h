@class NSObject;
@protocol OS_xpc_object;

@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching> {
    NSObject<OS_xpc_object> *_monitoredActivity;
}

- (id)init;
- (void).cxx_destruct;
- (id)_tokenForSandboxExtensionWithClass:(const char *)a0 path:(id)a1;
- (struct { unsigned char x0; })applyPatchWithFilename:(id)a0 toSrcDir:(id)a1 writingToEmptyDestDir:(id)a2 postPatchCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;
- (id)initWithMonitoredActivity:(id)a0;

@end
