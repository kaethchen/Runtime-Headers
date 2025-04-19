@class NSTextField, NSString, NSDictionary, NSView, NSImage, NSAttributedString, NSLayoutConstraint;

@interface PXAssistantTemplateView : NSView {
    NSView *_topViewContainer;
    NSLayoutConstraint *_topViewContainerZeroHeightConstraint;
    NSTextField *_titleLabel;
    NSTextField *_bodyLabel;
    NSView *_contentView;
    NSTextField *_footerLabel;
}

@property (class, readonly) NSDictionary *bodyTextAttributes;
@property (class, readonly) NSDictionary *emphasizedTextAttributes;

@property (retain, nonatomic) NSView *topView;
@property (retain, nonatomic) NSImage *topImage;
@property (retain, nonatomic) NSString *topImageSymbolName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSAttributedString *attributedBodyText;

+ (id)boxForImageWithSystemSymbolName:(id)a0;
+ (id)templateViewWithSymbolName:(id)a0 title:(id)a1 body:(id)a2 contentView:(id)a3 footer:(id)a4;
+ (id)templateViewWithTitle:(id)a0 body:(id)a1 contentView:(id)a2;
+ (id)templateViewWithTopImage:(id)a0 title:(id)a1 body:(id)a2 contentView:(id)a3;
+ (id)templateViewWithTopView:(id)a0 title:(id)a1 body:(id)a2 contentView:(id)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 body:(id)a1 contentView:(id)a2 footer:(id)a3;

@end
