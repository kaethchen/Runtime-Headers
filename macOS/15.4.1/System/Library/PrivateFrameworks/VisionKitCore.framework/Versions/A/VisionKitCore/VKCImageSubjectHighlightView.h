@class NSString, NSMenuItem;
@protocol VKCImageSubjectHighlightViewDelegate;

@interface VKCImageSubjectHighlightView : VKCImageSubjectBaseView <NSMenuItemValidation>

@property (readonly, nonatomic) NSMenuItem *copySubjectMenuItem;
@property (readonly, nonatomic) NSMenuItem *shareSubjectMenuItem;
@property (weak, nonatomic) id<VKCImageSubjectHighlightViewDelegate> delegate;
@property (nonatomic) BOOL subjectHighlightActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)wantsLayer;
- (void)highlightSubjectAtIndexSet:(id)a0 showCallout:(BOOL)a1 showBurst:(BOOL)a2 burstPoint:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (void)_copySubject:(id)a0;
- (void)_shareSubject:(id)a0;
- (void)configureStateForSubjectHighlightActiveAnimated:(BOOL)a0;
- (void)loadImageSubjectIfNecessaryWithCompletion:(id /* block */)a0;
- (id)menuItemsForEvent:(id)a0;
- (void)selectSubjectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSubjectHighlightActive:(BOOL)a0 animated:(BOOL)a1;

@end
