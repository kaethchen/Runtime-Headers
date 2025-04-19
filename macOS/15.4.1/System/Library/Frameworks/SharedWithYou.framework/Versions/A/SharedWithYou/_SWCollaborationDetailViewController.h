@class SWHighlight, NSViewController, NSItemProvider, SWCollaborationDetailViewModel, NSObject;

@interface _SWCollaborationDetailViewController : NSViewController

@property (nonatomic, retain) SWCollaborationDetailViewModel *viewModel;
@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (retain, nonatomic) NSViewController *typeErasedHostingController;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSObject *typeErasedViewModel;
@property (retain, nonatomic) NSViewController *typeErasedHostingController;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSObject *typeErasedViewModel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)setCloudSharingServiceDelegate:(id)a0;
- (void)setListContent:(id)a0;
- (id)cloudSharingServiceDelegate;
- (id)initWithHighlight:(id)a0 listContent:(id)a1;
- (id)initWithItemProvider_impl:(id)a0;
- (void)setListContentView:(id)a0;

@end
