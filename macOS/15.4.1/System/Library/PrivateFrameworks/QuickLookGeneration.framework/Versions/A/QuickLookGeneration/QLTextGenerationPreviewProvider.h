@class NSString;

@interface QLTextGenerationPreviewProvider : NSObject <QLPreviewingController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)providePreviewForFileRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
