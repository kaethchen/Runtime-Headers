@class NSMutableDictionary;

@interface MPSGraphPackageMLIRLibrary : MPSGraphObject {
    NSMutableDictionary *_mlirLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (id)getDict;
- (void)addDataFileNames:(id)a0;
- (void)addOptimizedNoDeviceResourcesUsed:(id)a0 withSignature:(id)a1;
- (void)addOptimizedResourcesUsed:(id)a0 withSignature:(id)a1;
- (void)addOriginalMLIRFile:(id)a0;
- (void)addOriginalResourcesUsed:(id)a0;
- (id)getCallablesDescription;
- (id)getOptimizedModules;
- (id)getOptimizedNoDeviceModules;
- (id)getOptimizedNoDeviceResourcesUsedLibrary;
- (id)getOptimizedResourcesUsedLibrary;
- (id)getOriginalResourcesUsed;
- (id)getResourceOffsetsLibrary;
- (unsigned long long)getResourceStorageMode;
- (id)initWithMLIRLibraryDict:(id)a0;
- (BOOL)optimizedModuleWithSignature:(id)a0;
- (BOOL)optimizedNoDeviceModuleWithSignature:(id)a0;
- (BOOL)originalFileExists;
- (void)setCallablesDescription:(id)a0;
- (void)setOptimizedModule:(id)a0 withSignature:(id)a1;
- (void)setOptimizedNoDeviceModule:(id)a0 withSignature:(id)a1;
- (void)setResourceStorageMode:(unsigned long long)a0;
- (void)updateWithMLIRLibrary:(id)a0;

@end
