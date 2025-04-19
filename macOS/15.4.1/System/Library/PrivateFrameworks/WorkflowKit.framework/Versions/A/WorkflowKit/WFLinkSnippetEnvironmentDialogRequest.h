@interface WFLinkSnippetEnvironmentDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL siriRequest;
@property (readonly, nonatomic) BOOL hasDialog;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0 prompt:(id)a1 siriRequest:(BOOL)a2 hasDialog:(BOOL)a3;

@end
