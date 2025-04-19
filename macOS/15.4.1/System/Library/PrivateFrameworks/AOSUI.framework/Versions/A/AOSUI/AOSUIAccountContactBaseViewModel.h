@class NSString, NSImage, NSView, AACustodianshipInfo;
@protocol AAOBWelcomeControllerModelProtocol;

@interface AOSUIAccountContactBaseViewModel : NSObject <AOSUIOBWelcomeControllerViewModelProtocol> {
    id<AAOBWelcomeControllerModelProtocol> _model;
}

@property (copy, nonatomic) NSImage *image;
@property (copy, nonatomic) NSView *contentView;
@property (nonatomic) long long templateContentViewLayout;
@property (nonatomic) long long templateType;
@property (readonly, nonatomic) BOOL shouldEnableFirstButtonOnLoad;
@property (readonly, nonatomic) BOOL shouldShowHelpLinkAsTemplateButton;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;

@end
