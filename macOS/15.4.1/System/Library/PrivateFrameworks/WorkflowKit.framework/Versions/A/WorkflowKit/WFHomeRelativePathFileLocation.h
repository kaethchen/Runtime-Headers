@interface WFHomeRelativePathFileLocation : WFFilePathLocation

+ (id)homeDirectory;
+ (id)subpathFromURL:(id)a0;
+ (BOOL)canRepresentURL:(id)a0;

- (id)resolveLocationWithError:(id *)a0;
- (BOOL)shouldShowUsersDuringDisplay:(id)a0;
- (BOOL)isSupportedOnCurrentPlatform;

@end
