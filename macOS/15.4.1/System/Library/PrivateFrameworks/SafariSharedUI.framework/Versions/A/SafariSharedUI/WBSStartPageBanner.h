@class NSString, NSImage, WBSPrivacyReportData, NSArray, NSAttributedString;

@interface WBSStartPageBanner : NSObject

@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) long long contentVariant;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSAttributedString *attributedMessage;
@property (readonly, nonatomic) long long numberOfTrackers;
@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, nonatomic) WBSPrivacyReportData *privacyReportData;
@property (retain, nonatomic) NSString *primaryButtonTitle;
@property (retain, nonatomic) NSString *secondaryButtonTitle;
@property (copy, nonatomic) id /* block */ primaryButtonHandler;
@property (copy, nonatomic) id /* block */ secondaryButtonHandler;
@property (readonly, copy, nonatomic) id /* block */ dismissHandler;
@property (readonly, copy, nonatomic) NSArray *privateBrowsingExplanationItems;
@property (readonly, nonatomic) long long privateBrowsingExplanationState;
@property (copy, nonatomic) id /* block */ privateBrowsingExplanationDismissHandler;
@property (retain, nonatomic) NSString *appearanceName;

+ (id)privateBrowsingPersistentModule;
+ (id)privateRelayPromptBannerWithImage:(id)a0 title:(id)a1 message:(id)a2 dismissHandler:(id /* block */)a3;
+ (id)bannerWithImage:(id)a0 title:(id)a1 message:(id)a2 interactive:(BOOL)a3 dismissHandler:(id /* block */)a4;
+ (id)bannerWithTitle:(id)a0 attributedMessage:(id)a1 primaryButtonTitle:(id)a2 secondaryButtonTitle:(id)a3 primaryButtonHandler:(id /* block */)a4 secondaryButtonHandler:(id /* block */)a5;
+ (id)bannerWithTitle:(id)a0 message:(id)a1 dismissHandler:(id /* block */)a2;
+ (id)privacyReportBannerWithNumberOfTrackers:(long long)a0 privateBrowsingEnabled:(BOOL)a1 privacyReportData:(id)a2 selectionHandler:(id /* block */)a3;
+ (id)privateBrowsingExplanationBannerWithState:(long long)a0 explanationItems:(id)a1 dismissHandler:(id /* block */)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentVariant:(long long)a0 action:(id /* block */)a1;

@end
