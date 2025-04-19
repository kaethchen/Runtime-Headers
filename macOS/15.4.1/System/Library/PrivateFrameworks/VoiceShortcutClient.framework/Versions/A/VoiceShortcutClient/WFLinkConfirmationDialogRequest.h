@class WFDialogButton, NSString, WFParameterKeyValuePair, LNConfirmationSystemStyle;

@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) WFDialogButton *yesButton;
@property (readonly, copy, nonatomic) WFDialogButton *noButton;
@property (readonly, nonatomic) WFParameterKeyValuePair *parameterInfo;
@property (readonly, nonatomic) BOOL isDestructive;
@property (nonatomic) BOOL isContinueInAppRequest;
@property (readonly, nonatomic) LNConfirmationSystemStyle *systemStyle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionMetadata:(id)a0 showPrompt:(BOOL)a1 dialogString:(id)a2 viewSnippet:(id)a3 yesText:(id)a4 noText:(id)a5 attribution:(id)a6 parameterInfo:(id)a7 isContinueInAppRequest:(BOOL)a8 systemStyle:(id)a9 destructive:(BOOL)a10;
- (id)initWithActionParameterMetadata:(id)a0 dialogString:(id)a1 viewSnippet:(id)a2 attribution:(id)a3 parameterInfo:(id)a4;
- (id)initWithTitle:(id)a0 viewSnippet:(id)a1 yesText:(id)a2 noText:(id)a3 attribution:(id)a4 parameterInfo:(id)a5 isContinueInAppRequest:(BOOL)a6 systemStyle:(id)a7 showPrompt:(BOOL)a8 destructive:(BOOL)a9;

@end
