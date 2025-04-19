@protocol ReadingListSidebarViewDragAndDropDelegate;

@interface ReadingListSidebarView : FlippedView

@property (weak, nonatomic) id<ReadingListSidebarViewDragAndDropDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;

@end
