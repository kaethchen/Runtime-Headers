@interface IFLocator : NSObject {
    void *context;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

+ (id)sharedLocator;

- (void)dealloc;
- (id)init;
- (void)interrupt;
- (id)absolutePathWithPath:(id)a0 withRoot:(id)a1;
- (void)addTokenDefinition:(id)a0 withName:(id)a1 inNameSpace:(id)a2;
- (void)addTokenDefinitionDictionary:(id)a0 inNamespace:(id)a1;
- (id)bomStylePathWithPath:(id)a0 withRoot:(id)a1;
- (void)preResolveAllTokensForPaths:(id)a0 withLocalNamespace:(id)a1;
- (void)preResolveAllTokensInArray:(id)a0;
- (id)resolveTokenizedPathIntoBomPath:(id)a0 withLocalNamespace:(id)a1 withRoot:(id)a2;
- (id)resolveTokenizedPathIntoFSPath:(id)a0 withLocalNamespace:(id)a1;
- (void)setFilesystemScanTimeout:(id)a0;
- (void)setTargetMountPoint:(id)a0;
- (void)setToken:(id)a0 toValue:(id)a1;
- (void)setTokenValuesInNamespace:(id)a0 withDictionary:(id)a1;
- (id)tokenFromName:(id)a0 inNamespace:(id)a1;
- (id)tokenFromTokenizedPath:(id)a0 withLocalNamespace:(id)a1;
- (id)tokenValue:(id)a0;
- (id)tokenValue:(id)a0 atIndex:(unsigned int)a1;
- (unsigned int)tokenValueCount:(id)a0;
- (id)tokenValuesInNamespace:(id)a0;

@end
