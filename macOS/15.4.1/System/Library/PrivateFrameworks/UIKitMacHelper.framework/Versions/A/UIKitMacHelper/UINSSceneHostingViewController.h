@class UIWindowScene, NSString, UINSInputView, UINSSceneViewController;
@protocol UINSSceneHostingViewControllerDelegate;

@interface UINSSceneHostingViewController : NSViewController {
    NSString *_sceneIdentifier;
    NSString *_persistentIdentifier;
    UIWindowScene *_windowScene;
    UINSSceneViewController *_sceneViewController;
    BOOL _didFinishInitializing;
    BOOL _encounteredViewWillAppear;
    BOOL _didResumeSceneResize;
}

@property (readonly, nonatomic) UINSInputView *inputView;
@property (weak) id<UINSSceneHostingViewControllerDelegate> delegate;
@property (readonly) UIWindowScene *windowScene;
@property (readonly) NSString *sceneIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_suppressSceneResizeIfNecessary;
- (void)_finishInitializationWithScene:(id)a0;
- (void)_resumeSceneResizeIfNecessary;
- (BOOL)cancelOutstandingUserInputIfNeeded;
- (void)closeScene;
- (struct CGPoint { double x0; double x1; })convertPointFromScene:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToScene:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScene:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScene:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeFromScene:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeToScene:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSceneSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSceneType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)sceneViewController;

@end
