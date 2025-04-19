@class NSString, NSSet;

@interface AppSandboxFolderRedirector : NSObject {
    NSString *_homedir;
    NSSet *_redirectedPaths;
}

+ (id)expandPathForFolder:(id)a0 withUserHomeDirectory:(id)a1;
+ (id)folderRedirectorForUID:(unsigned int)a0 error:(id *)a1;
+ (id)folderRedirectorForUserWithHomeDirectory:(id)a0 error:(id *)a1;
+ (id)redirectedFolders;

- (void).cxx_destruct;
- (id)initForUserWithHomeDirectory:(id)a0 error:(id *)a1;
- (BOOL)isRedirectionEnabledForPath:(id)a0;
- (id)redirectedFolderPaths;
- (id)resolvedRedirectedFolders;

@end
