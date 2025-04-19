@class NSString, NSTextView, NSButton;

@interface OtherUserAgentSheetController : NSWindowController {
    NSString *_userAgentString;
    NSTextView *userAgentTextView;
    NSButton *acceptButton;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)windowNibName;
- (id)userAgentString;
- (void)acceptUserAgentString:(id)a0;
- (void)cancelUserAgentString:(id)a0;
- (id)initWithUserAgentString:(id)a0;
- (void)updateAcceptButton;

@end
