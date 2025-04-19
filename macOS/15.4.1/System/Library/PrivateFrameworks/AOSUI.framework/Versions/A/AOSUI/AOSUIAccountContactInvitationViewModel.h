@class NSString, AACustodianshipInfo;

@interface AOSUIAccountContactInvitationViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSString *_title;
    NSString *_detailText;
    NSString *_recipientHandle;
    NSString *_ownerHandle;
    AACustodianshipInfo *_custodianshipInfo;
    long long _templateContentViewLayout;
}

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)detailText;
- (void)setOwnerHandle:(id)a0;
- (id)ownerHandle;
- (id)initWithModel:(id)a0;
- (void)setDetailText:(id)a0;
- (id)recipientHandle;
- (id)custodianshipInfo;
- (void)setCustodianshipInfo:(id)a0;
- (void)setRecipientHandle:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
