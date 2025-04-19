@class NSString, SiriUISnippetViewController, NSTextField;

@interface SiriUITitledSectionHeaderView : NSView <NSCollectionViewElement, SiriUIReusableView>

@property (weak) NSTextField *headerTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)reuseIdentifier;
+ (id)elementKind;
+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setStringValue:(id)a0;
- (BOOL)allowsVibrancy;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(long long)a1;

@end
