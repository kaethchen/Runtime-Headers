@class NSString, NSImage;

@interface _ASAccountManagerTipContent : NSObject

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) BOOL hasBorderedImage;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *declineButtonTitle;

+ (id)_contentForFamilyTip;
+ (id)_contentForGeneralTip;
+ (id)_contentForImportPasswordsTip;
+ (id)_contentForMenuBarTip;
+ (id)_contentForiCloudKeychainTip;
+ (id)_familySharingTipButtonTitle;
+ (id)_familySharingTipDeclineButtonTitle;
+ (BOOL)_familySharingTipHasBorderedImage;
+ (id)_familySharingTipSubtitle;
+ (id)_familySharingTipTitle;
+ (id)_generalSharingTipButtonTitle;
+ (id)_generalSharingTipDeclineButtonTitle;
+ (BOOL)_generalSharingTipHasBorderedImage;
+ (id)_generalSharingTipSubtitle;
+ (id)_generalSharingTipTitle;
+ (id)_iCloudKeychainTipButtonTitle;
+ (id)_iCloudKeychainTipDeclineButtonTitle;
+ (BOOL)_iCloudKeychainTipHasBorderedImage;
+ (id)_iCloudKeychainTipImage;
+ (id)_iCloudKeychainTipImageName;
+ (id)_iCloudKeychainTipSubtitle;
+ (id)_iCloudKeychainTipTitle;
+ (id)_imageForSharingTips;
+ (id)_imageNameForSharingTips;
+ (id)_importPasswordsButtonTitle;
+ (id)_importPasswordsTipDeclineButtonTitle;
+ (BOOL)_importPasswordsTipHasBorderedImage;
+ (id)_importPasswordsTipImage;
+ (id)_importPasswordsTipImageName;
+ (id)_importPasswordsTipSubtitle;
+ (id)_importPasswordsTipTitle;
+ (id)_menuBarTipButtonTitle;
+ (id)_menuBarTipDeclineButtonTitle;
+ (BOOL)_menuBarTipHasBorderedImage;
+ (id)_menuBarTipImage;
+ (id)_menuBarTipImageName;
+ (id)_menuBarTipSubtitle;
+ (id)_menuBarTipTitle;
+ (id)_tipImageWithName:(id)a0 pointSize:(double)a1;
+ (id)contentForTipType:(long long)a0;

- (void).cxx_destruct;
- (id)_initWithImageName:(id)a0 image:(id)a1 hasBorderedImage:(BOOL)a2 title:(id)a3 subtitle:(id)a4 buttonTitle:(id)a5 declineButtonTitle:(id)a6;

@end
