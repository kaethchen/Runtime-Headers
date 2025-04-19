@class LNViewSnippet;

@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) BOOL showPrompt;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithViewSnippet:(id)a0 attribution:(id)a1 showPrompt:(BOOL)a2;

@end
