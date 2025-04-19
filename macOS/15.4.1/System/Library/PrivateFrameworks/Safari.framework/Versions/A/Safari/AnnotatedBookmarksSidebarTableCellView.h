@class NSString;
@protocol AnnotatedBookmarksSidebarTableCellViewDelegate;

@interface AnnotatedBookmarksSidebarTableCellView : NSTableCellView <NSControlTextEditingDelegate>

@property (weak, nonatomic) id<AnnotatedBookmarksSidebarTableCellViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (void)controlTextDidEndEditing:(id)a0;
- (void)viewDidMoveToWindow;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;

@end
