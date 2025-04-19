@class FI_TUpdateLayerView, NSString, NSView, FI_TButton, NSStackView, FI_TImageView, NSImage, FI_TTextField, NSButton;

@interface FI_TIconCollectionGroupHeaderView : FI_TUpdateLayerView <NSCollectionViewReusable, NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate> {
    NSStackView *_stackView;
    FI_TImageView *_tagImageView;
    FI_TTextField *_titleField;
    FI_TButton *_collapseButton;
    FI_TUpdateLayerView *_topHorizontalLineView;
    NSView *_blurBackgroundView;
}

@property (retain, nonatomic) NSImage *tagImage;
@property (copy, nonatomic) NSString *titleStr;
@property (nonatomic) unsigned long long nodeCount;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isCollapseButtonHidden) BOOL collapseButtonHidden;
@property (nonatomic, getter=isCollapseButtonHiddenManually) BOOL collapseButtonHiddenManually;
@property (getter=isFloating) BOOL floating;
@property (readonly) NSString *reuseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak) NSButton *sectionCollapseButton;

+ (id)nibName;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)layout;
- (void)awakeFromNib;
- (void)updateLayer;
- (void)initCommon;
- (void)setCollapseButtonPressedFunc:(const void *)a0;

@end
