@class FI_TNodeViewSettings;

@interface FI_TViewOptionsSettingsController : NSObject {
    FI_TNodeViewSettings *_targetedViewOptionsSettings;
}

@property (retain, nonatomic) FI_TNodeViewSettings *targetedViewOptionsSettings;
@property (nonatomic) int viewStyleForViewOptions;
@property (nonatomic) BOOL shouldShowLibraryFolderButton;
@property (nonatomic) BOOL shouldShowLibraryFolder;
@property (nonatomic) BOOL shouldShowPreviewPane;

+ (id)sharedController;
+ (void)tearDownSharedController;

- (void).cxx_destruct;
- (id)_init;

@end
