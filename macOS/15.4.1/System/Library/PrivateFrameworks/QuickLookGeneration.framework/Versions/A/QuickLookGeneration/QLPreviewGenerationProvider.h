@class NSString;

@interface QLPreviewGenerationProvider : QLPreviewProvider <QLPreviewingController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerForType:(id)a0;

- (void)providePreviewForFileRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
