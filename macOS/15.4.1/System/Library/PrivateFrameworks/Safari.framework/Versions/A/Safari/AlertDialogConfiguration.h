@class NSString, NSArray, NSNumber;

@interface AlertDialogConfiguration : NSObject <NSCopying, TabDialogConfiguration>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *buttonLabels;
@property (readonly, copy, nonatomic) NSString *originStringForAccessibility;
@property (readonly, nonatomic) BOOL hasPromptField;
@property (readonly, copy, nonatomic) NSString *promptFieldDefaultResponse;
@property (readonly, nonatomic) BOOL hasSecurePromptField;
@property (readonly, nonatomic) NSNumber *customWidth;
@property (readonly, nonatomic) id /* block */ customLeftMostAction;
@property (readonly, nonatomic) NSArray *tableData;
@property (readonly, nonatomic) id /* block */ tableDidSelectRowAction;
@property (readonly, nonatomic) long long dialogType;
@property (readonly, nonatomic) BOOL shouldHideTabContent;
@property (readonly, nonatomic) id /* block */ presentationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_truncatedMessageForJavaScriptDialogWithMessage:(id)a0;
+ (id)javaScriptAlertDialogConfigurationWithMessage:(id)a0 originStringForAccessibility:(id)a1;
+ (id)javaScriptConfirmDialogConfigurationWithMessage:(id)a0 originStringForAccessibility:(id)a1;
+ (id)javaScriptPromptDialogConfigurationWithMessage:(id)a0 defaultResponse:(id)a1 originStringForAccessibility:(id)a2;
+ (id)mailPromptConfigurationWithOriginStringForAccessibility:(id)a0;
+ (id)openApplicationPromptConfigurationWithApplicationName:(id)a0 originStringForAccessibility:(id)a1 alwaysAllowHandler:(id /* block */)a2;
+ (id)passDownloadBlockedPromptConfiguration;
+ (id)plugInPromptConfigurationWithTitle:(id)a0 message:(id)a1 confirmButtonLabel:(id)a2;
+ (id)printSheetBlockedPromptConfiguration;
+ (id)storageQuotaIncreasePromptConfigurationWithURL:(id)a0 originDisplayName:(id)a1 newQuota:(unsigned long long)a2;
+ (id)telephonyPromptConfigurationWithOriginStringForAccessibility:(id)a0;
+ (id)unableToLoadPageInMainFrameConfigurationWithFailingURL:(id)a0;
+ (id)unableToOpenAppleMusicURLConfigurationWithFailingURL:(id)a0;
+ (id)unableToOpenRSSURLConfigurationWithFailingURL:(id)a0;
+ (id)walletOrderDownloadBlockedPromptConfiguration;
+ (id)walletOrderImportFailedPromptConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 message:(id)a1 buttonLabels:(id)a2 originStringForAccessibility:(id)a3 hasPromptField:(BOOL)a4 promptFieldDefaultResponse:(id)a5 customWidth:(id)a6 dialogType:(long long)a7;
- (id)_initWithTitle:(id)a0 message:(id)a1 buttonLabels:(id)a2 originStringForAccessibility:(id)a3 hasPromptField:(BOOL)a4 promptFieldDefaultResponse:(id)a5 hasSecurePromptField:(BOOL)a6 customWidth:(id)a7 dialogType:(long long)a8 presentationBlock:(id /* block */)a9 customLeftMostAction:(id /* block */)a10 tableData:(id)a11 tableDidSelectRowAction:(id /* block */)a12;
- (id)initWithTitle:(id)a0 message:(id)a1 buttonLabels:(id)a2 originStringForAccessibility:(id)a3 hasPromptField:(BOOL)a4 promptFieldDefaultResponse:(id)a5 customWidth:(id)a6;

@end
