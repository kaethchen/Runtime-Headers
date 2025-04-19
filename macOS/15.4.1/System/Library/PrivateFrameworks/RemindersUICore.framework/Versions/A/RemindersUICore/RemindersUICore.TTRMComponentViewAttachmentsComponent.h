@interface RemindersUICore.TTRMComponentViewAttachmentsComponent : NSObject <QLPreviewPanelDelegate, QLPreviewPanelDataSource> {
    void /* unknown type, empty encoding */ enabledState;
    void /* unknown type, empty encoding */ currentAccessedSecurityScopedResources;
    void /* unknown type, empty encoding */ attachmentsViewController;
}

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;

@end
