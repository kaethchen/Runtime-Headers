@interface SYDocumentWorkflowsCloseConfirmationSettings : NSObject {
    long long _registrationToken;
    BOOL _didRegisterConfirmationDialogNotifier;
}

- (void)dealloc;
- (void)_registerCustomCloseConfirmationSettingsForDocument:(id)a0;
- (void)_replyToSenderWithAutosavedFileURL:(id)a0 preferredFileName:(id)a1 documentAttributes:(id)a2 isNewMailMessageAction:(BOOL)a3 completion:(id /* block */)a4;
- (void)_replyToSenderWithDocument:(id)a0 preferredFileName:(id)a1 documentAttributes:(id)a2 isNewMailMessageAction:(BOOL)a3;
- (void)registerCustomCloseConfirmationSettings;

@end
