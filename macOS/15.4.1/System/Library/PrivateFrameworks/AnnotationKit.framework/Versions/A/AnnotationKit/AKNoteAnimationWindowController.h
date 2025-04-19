@class NSString, AKNoteMarginView, AKAnnotationTheme;

@interface AKNoteAnimationWindowController : NSWindowController

@property (retain, nonatomic) AKNoteMarginView *marginView;
@property (retain, nonatomic) AKAnnotationTheme *theme;
@property (retain, nonatomic) NSString *noteText;

+ (id)newNoteWindowController;

- (void).cxx_destruct;
- (void)animateFromScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 useScaling:(BOOL)a2 parentWindow:(id)a3 completion:(id /* block */)a4;

@end
