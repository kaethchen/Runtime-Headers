@class NSURL, RPVideoEditorHostRemoteNSViewController, NSView;
@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : NSViewController <RPVideoEditorHostRemoteNSViewControllerDelegate>

@property (nonatomic) BOOL wasStatusBarHidden;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) RPVideoEditorHostRemoteNSViewController *hostViewController;
@property (nonatomic) NSView *view;
@property (weak, nonatomic) id<RPPreviewViewControllerDelegate> previewControllerDelegate;

+ (void)loadPreviewViewControllerWithMovieURL:(id)a0 attachmentURL:(id)a1 overrideShareMessage:(id)a2 overrideTintColor:(id)a3 completion:(id /* block */)a4;
+ (void)loadPreviewViewControllerWithMovieURL:(id)a0 completion:(id /* block */)a1;
+ (void)setUpPreviewViewControllerForExtension:(id)a0 movieURL:(id)a1 window:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)extensionDidFinishWithActivityTypes:(id)a0;
- (void)viewControlerDidFinish;

@end
