@class NSString, SafariWebExtension;

@interface BackgroundLoadConfiguration : NSObject

@property (copy, nonatomic) NSString *httpReferrer;
@property (nonatomic) BOOL allowAccessToKeychain;
@property (nonatomic) BOOL allowRemoteInspection;
@property (nonatomic) BOOL includeToolbars;
@property (nonatomic) BOOL cancelExistingLoadsWithSameURL;
@property (nonatomic) long long copySessionState;
@property (nonatomic) BOOL setUpParentTabBackItem;
@property (nonatomic) BOOL canAttemptUpgradingRequestURLToHTTPS;
@property (retain, nonatomic) SafariWebExtension *webExtension;

- (void).cxx_destruct;

@end
