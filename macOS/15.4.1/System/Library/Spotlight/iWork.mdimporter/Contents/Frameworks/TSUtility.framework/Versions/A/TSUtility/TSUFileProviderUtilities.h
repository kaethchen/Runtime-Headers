@interface TSUFileProviderUtilities : NSObject

@property (class, readonly) BOOL isPauseSyncSPIAvailable;

+ (void)initialize;
+ (void)didUpdateAlternateContentsDocumentForSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)fetchLatestVersionURLOfPausedSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)getPausedURLsWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
+ (void)pauseSyncOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)pauseSyncOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 completionQueue:(id)a2 uuid:(id)a3 completion:(id /* block */)a4;
+ (BOOL)pauseSyncSynchronouslyOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)pauseSyncSynchronouslyOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 uuid:(id)a2 error:(id *)a3;
+ (void)resumeSyncOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)resumeSyncOnSandboxedURL:(id)a0 behavior:(unsigned long long)a1 completionQueue:(id)a2 uuid:(id)a3 completion:(id /* block */)a4;
+ (void)setAlternateContentsURL:(id)a0 onSandboxedURL:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;

- (id)init;

@end
