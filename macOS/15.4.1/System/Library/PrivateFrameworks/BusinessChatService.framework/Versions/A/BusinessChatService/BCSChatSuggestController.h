@class NSString;
@protocol BCSIdentityServiceProtocol, BCSUserDefaultsProviding, BCSLocaleHelperProtocol;

@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol>

@property (readonly, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (readonly, nonatomic) id<BCSIdentityServiceProtocol> identityService;
@property (readonly, nonatomic) id<BCSLocaleHelperProtocol> localeHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)chatSuggestVisibilityForBusinessItem:(id)a0;
- (id)initWithUserDefaults:(id)a0 identityService:(id)a1 localeHelper:(id)a2;

@end
