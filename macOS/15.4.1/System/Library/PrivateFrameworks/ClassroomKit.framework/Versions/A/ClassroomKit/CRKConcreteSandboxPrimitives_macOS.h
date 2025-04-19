@interface CRKConcreteSandboxPrimitives_macOS : NSObject <CRKSandboxPrimitives>

+ (id)processName;
+ (BOOL)isSandboxDisabled;
+ (id)sandboxProfileName;

- (BOOL)enter;
- (char *)getCacheDirectory;
- (char *)getHomeDirectory;
- (char *)getTempDirectory;

@end
