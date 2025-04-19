@class NSURL;

@interface WFLinkSnippetDialogResponse : WFDialogResponse

@property (readonly, nonatomic) unsigned long long snippetResponseCode;
@property (copy, nonatomic) NSURL *requestedOpenURL;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCancelled:(BOOL)a0;
- (id)initWithRequestedOpenURL:(id)a0;
- (id)initWithResponseCode:(long long)a0;

@end
