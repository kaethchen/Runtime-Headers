@class NSTextField, NSString, NSLayoutConstraint;
@protocol AnnotatedBookmarksSidebarExpandedTableCellViewDelegate;

@interface AnnotatedBookmarksSidebarExpandedTableCellView : AnnotatedBookmarksSidebarTableCellView <NSControlTextEditingDelegate> {
    NSLayoutConstraint *_editingTitleHeightConstraint;
    NSLayoutConstraint *_editingDescriptionHeightConstraint;
}

@property (weak, nonatomic) NSLayoutConstraint *leadingPaddingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *trailingPaddingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenImageAndTextConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenDescriptionTextAndBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenImageAndBottomConstraint;
@property (weak, nonatomic) NSTextField *descriptionTextField;
@property (weak, nonatomic) NSTextField *addressTextField;
@property (weak, nonatomic) id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate> expandedCellViewDelegate;
@property (readonly, nonatomic) double fittingHeight;
@property (nonatomic) BOOL showingThumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidEndEditing:(id)a0;
- (void)editPreviewText;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;
- (void)updateTextFieldMaxLayoutWidths;

@end
