@class NSURL;

@interface LSAppTranslocationResult : NSObject {
    NSURL *_relativePathRoot;
}

@property (readonly) NSURL *originalApplicationURL;
@property (readonly) NSURL *effectiveApplicationURL;
@property (readonly) NSURL *secureDirectoryURL;

+ (id)examineAndTranslocateApplicationAtURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)abandonSecureDirectory;
- (id)initWithOriginalURL:(id)a0 effectiveURL:(id)a1 secureDirectoryURL:(id)a2 relativeRootURL:(id)a3;
- (id)mapRelativePathToEffectiveURL:(id)a0;

@end
