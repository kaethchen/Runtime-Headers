@class NSString, NSExtensionContext;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>

@property (retain) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_finish;
- (void)checkDownloadQueue;
- (void)requestUpdatedWithResult:(id)a0 completion:(id /* block */)a1;

@end
