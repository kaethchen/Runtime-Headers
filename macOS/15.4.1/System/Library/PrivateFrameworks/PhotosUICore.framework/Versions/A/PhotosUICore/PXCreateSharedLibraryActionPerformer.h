@class NSString, PXSharedLibraryStatusProvider, PXSharedLibraryLegacyDevicesFallbackMonitor;

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>

@property (retain, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)assistantController:(id)a0 completedWithError:(id)a1;
- (id)initWithSharedLibraryStatusProvider:(id)a0;
- (void)performActionWithLegacyDevicesFallbackMonitor:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;

@end
