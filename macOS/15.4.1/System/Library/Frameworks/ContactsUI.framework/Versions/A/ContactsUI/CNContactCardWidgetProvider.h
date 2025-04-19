@class CNCache, CNContactCardWidgetProviderDelegateWrapper;

@interface CNContactCardWidgetProvider : NSObject

@property (retain, nonatomic) CNContactCardWidgetProviderDelegateWrapper *safeDelegate;
@property (retain, nonatomic) CNCache *viewControllerCache;

+ (id)listOfWidgetClassesFromModeIdentifier;
+ (id)modeIdentifierForMode:(unsigned long long)a0 tabState:(unsigned long long)a1 allowsLikenessEditing:(BOOL)a2 isMe:(BOOL)a3;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)editAuthorizationViewController;
- (id)avatarNameCompositeController;
- (id)avatarViewController;
- (id)cardWidgetsFromWidgetClasses:(id)a0;
- (id)controllerOfClass:(Class)a0;
- (id)detailsViewController;
- (id)likenessPickerViewController;
- (id)nameViewController;
- (id)sharingEnabledWarningViewController;
- (BOOL)shouldIncludeViewController:(id)a0;
- (void)tellDelegateWillCreateViewController:(id)a0;
- (id)widgetsForContactCardViewMode:(unsigned long long)a0 isMe:(BOOL)a1;

@end
