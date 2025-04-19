@class NSURL, FIFinderSync;

@interface FICollaborationServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating> {
    FIFinderSync *_syncExtension;
    NSURL *_url;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithExtension:(id)a0 URL:(id)a1;

@end
