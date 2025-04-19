@class NSURL, NSOperationQueue;

@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL *_documentURL;
    NSOperationQueue *_queue;
}

@property (nonatomic) BOOL includeCachedVersions;

- (void).cxx_destruct;
- (id)initWithDocumentURL:(id)a0;
- (void)main;
- (id)fp_prettyDescription;
- (BOOL)isSandboxExtensionConsumed;
- (void)presendNotifications;

@end
