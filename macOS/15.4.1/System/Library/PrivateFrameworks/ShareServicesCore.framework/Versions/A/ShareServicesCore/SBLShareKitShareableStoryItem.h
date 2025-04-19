@class NSProgress, PXStoryExportManager, NSImage;
@protocol PXStoryExportActivityHelper;

@interface SBLShareKitShareableStoryItem : SBLShareKitShareableItem {
    BOOL _isPerformingExportActivity;
    NSImage *_placeholderImage;
}

@property (readonly, nonatomic) PXStoryExportManager *exportManager;
@property (readonly, nonatomic) id<PXStoryExportActivityHelper> exportActivityHelper;
@property (readonly, nonatomic) NSProgress *progress;

- (void)dealloc;
- (void).cxx_destruct;
- (id)placeholderImage;
- (BOOL)canProvideMovie;
- (void)_handleExportResult:(BOOL)a0 error:(id)a1 exportConfiguration:(id)a2 exportPath:(id)a3;
- (void)_setPerformingExportActivity:(BOOL)a0 withConfiguration:(id)a1;
- (id)_updatedExportConfiguration:(id)a0 forSharingServiceName:(id)a1;
- (id)exportHintPath;
- (id)exportWithCompletionHandler:(id /* block */)a0;
- (void)exportWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithStoryExportActivityHelper:(id)a0 sessionGroup:(id)a1 workerQueue:(id)a2 replyQueue:(id)a3;
- (BOOL)shouldDelayShowingPrepareProgressUntilNonZeroProgress;

@end
