@class LNDialog, NSString, LNConfirmationActionName, NSXPCListenerEndpoint, LNActionMetadata, LNViewSnippet;

@interface WFLinkActionConfirmationAlertSession : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) LNActionMetadata *actionMetadata;
@property (readonly, nonatomic) BOOL shouldShowPrompt;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic) NSString *dialogString;
@property (readonly, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) LNConfirmationActionName *confirmationActionName;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0 actionMetadata:(id)a1 shouldShowPrompt:(BOOL)a2 dialog:(id)a3 dialogString:(id)a4 viewSnippet:(id)a5 confirmationActionName:(id)a6;

@end
