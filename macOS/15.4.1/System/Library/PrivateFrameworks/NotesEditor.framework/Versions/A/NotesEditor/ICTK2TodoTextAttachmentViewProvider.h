@class ICTTTextStorage, ICTodoButton, ICTK2MacTextView, NSString, ICTextController, ICTK2TodoTextAttachment;

@interface ICTK2TodoTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider <ICTodoButtonDragDelegate>

@property (readonly, nonatomic) ICTK2MacTextView *textView;
@property (readonly, nonatomic) ICTodoButton *todoButton;
@property (readonly, nonatomic) ICTK2TodoTextAttachment *todoTextAttachment;
@property (readonly, nonatomic) ICTextController *textController;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)didPressTodoButton:(id)a0;
- (BOOL)selectedRangesIntersectWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)todoButtonDidDrag:(id)a0;

@end
