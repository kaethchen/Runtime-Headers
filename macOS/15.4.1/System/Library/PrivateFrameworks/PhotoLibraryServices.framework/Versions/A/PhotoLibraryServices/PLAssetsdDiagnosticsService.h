@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPhotosXPCEndpoint:(id)a0 withReply:(id /* block */)a1;
- (void)incompleteRestoreProcessesWithReply:(id /* block */)a0;

@end
