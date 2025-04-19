@class NSString, NSImage, AVControlsPresentationContext, NSMutableArray;

@interface AVControlsViewController : NSViewController <AVControlsContainerViewControllerContent> {
    NSMutableArray *_bindings;
}

@property (retain, nonatomic) AVControlsPresentationContext *presentationContext;
@property (readonly) NSString *controlsStyleIdentifier;
@property (readonly) NSImage *backgroundBackdropViewMaskImage;
@property (readonly) long long preferredBlendingMode;
@property (readonly) long long preferredEffectMaterial;
@property (readonly) BOOL movableControlsContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)minimumWidth;
- (id)initialFirstResponder;
- (long long)layoutStyle;
- (double)minimumHeight;
- (id)additionalControlsContentViews;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)controlsContainerViewController:(id)a0 didAttachControlsWithContext:(id)a1;
- (void)controlsContainerViewController:(id)a0 didDetachControlsWithContext:(id)a1;
- (void)controlsContainerViewController:(id)a0 willAttachControlsWithContext:(id)a1;
- (void)controlsContainerViewController:(id)a0 willDetachControlsWithContext:(id)a1;
- (void)controlsContainerViewControllerDidHideView:(id)a0;
- (void)controlsContainerViewControllerDidShowView:(id)a0;
- (void)controlsContainerViewControllerWillHideView:(id)a0;
- (void)controlsContainerViewControllerWillShowView:(id)a0;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (void)setupNextKeyView;
- (void)unbindAllObjects;

@end
