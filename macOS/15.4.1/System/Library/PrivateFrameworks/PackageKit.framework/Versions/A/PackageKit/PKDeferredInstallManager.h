@class NSString;

@interface PKDeferredInstallManager : NSObject {
    NSString *_destinationPath;
    NSString *_rootPath;
    NSString *_manifestPath;
}

@property unsigned long long options;
@property (readonly) NSString *rootPath;

- (void)dealloc;
- (BOOL)addScriptAtPath:(id)a0 error:(id *)a1;
- (id)initWithDestinationPath:(id)a0 error:(id *)a1;
- (id)initWithDestinationPath:(id)a0 systemContentManifestPath:(id)a1 error:(id *)a2;
- (BOOL)prepareWithDeferredFileList:(id)a0 error:(id *)a1;

@end
