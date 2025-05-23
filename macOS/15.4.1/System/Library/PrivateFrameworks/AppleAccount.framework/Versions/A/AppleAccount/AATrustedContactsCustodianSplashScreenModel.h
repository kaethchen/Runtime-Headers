@class NSString, AACustodianshipInfo;

@interface AATrustedContactsCustodianSplashScreenModel : NSObject <AAOBBulletedWelcomeControllerModelProtocol>

@property (nonatomic) BOOL isWalrusEnabled;
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
- (id)bullets;
- (id)_firstBulletPointDescription;
- (id)_firstBulletPointSymbolName;
- (id)_firstBulletPointTitle;
- (id)_secondBulletPointDescription;
- (id)_secondBulletPointSymbolName;
- (id)_secondBulletPointTitle;
- (id)_thirdBulletPointDescription;
- (id)_thirdBulletPointSymbolName;
- (id)_thirdBulletPointTitle;

@end
