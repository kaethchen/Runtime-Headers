@class NSShadow, NSView, NSString, NSTextView, NSButton, NSLayoutConstraint;

@interface AMPModalTextSheet : NSWindow <NSTextViewDelegate>

@property (weak, nonatomic) NSView *header;
@property (weak, nonatomic) NSView *footer;
@property (weak, nonatomic) NSButton *defaultBtn;
@property (retain, nonatomic) NSTextView *descriptionArea;
@property (retain, nonatomic) NSShadow *headerShadow;
@property (retain, nonatomic) NSShadow *footerShadow;
@property (retain, nonatomic) NSLayoutConstraint *spaceConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doClose:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)scrollPositionChanged:(id)a0;
- (void)beginSheetOnWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTitle:(id)a0 callout:(id)a1 text:(id)a2 editable:(BOOL)a3;
- (void)updateForClipScrollPosition:(id)a0;
- (void)watchScrollView:(id)a0;

@end
