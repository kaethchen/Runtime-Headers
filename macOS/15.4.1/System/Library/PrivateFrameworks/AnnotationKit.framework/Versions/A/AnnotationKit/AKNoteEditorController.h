@class AKNoteEditorWindowController, AKNoteAnimationWindowController, AKPopupAnnotation, NSString, AKNoteMarginView, AKNoteStickyView;
@protocol AKNoteEditorControllerDelegate;

@interface AKNoteEditorController : NSObject <AKNoteStickyViewDelegate, AKNoteMarginViewDelegate, AKNoteEditorWindowDelegate>

@property (retain, nonatomic) AKNoteStickyView *stickyView;
@property (retain, nonatomic) AKNoteEditorWindowController *controller;
@property (retain, nonatomic) AKNoteAnimationWindowController *animator;
@property (retain, nonatomic) AKNoteMarginView *marginView;
@property (retain, nonatomic) AKPopupAnnotation *annotation;
@property (readonly, nonatomic) NSString *editedText;
@property (weak, nonatomic) id<AKNoteEditorControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_addMarginShowToCoalescedTimer:(id /* block */)a0;
+ (id)p_queuedAnimations;
+ (void)p_showCoalestedMargins;

- (void)dealloc;
- (void).cxx_destruct;
- (void)hide;
- (void)show:(BOOL)a0;
- (void)beginEditing:(BOOL)a0;
- (void)finishEditing;
- (void)marginViewWasClicked:(id)a0;
- (void)noteEditorTextDidChange:(id)a0;
- (void)noteEditorWindowDidClose:(id)a0;
- (void)noteEditorWindowDidOpen:(id)a0;
- (int)p_annotationStyleForPopupAnnotation:(id)a0;
- (void)p_hideStickyView;
- (void)p_setupWindowController;
- (void)p_showStickyView;
- (void)stickyViewWasClicked:(id)a0;
- (double)suggestedEditorHeightForWidth:(double)a0;

@end
