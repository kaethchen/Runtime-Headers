@class ODSession, SFAuthorization, DirectoryEditorViewController;

@interface DirectoryEditorView : NSView {
    DirectoryEditorViewController *_controller;
}

@property (retain, nonatomic) ODSession *odSession;
@property (retain, nonatomic) SFAuthorization *authForLocalNode;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startSearch;

@end
