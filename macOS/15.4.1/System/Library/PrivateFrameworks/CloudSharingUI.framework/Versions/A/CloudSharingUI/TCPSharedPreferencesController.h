@class NSString, NSUserDefaults, NSArray;

@interface TCPSharedPreferencesController : NSObject

@property (retain, nonatomic) NSUserDefaults *sharedMailUserDefaults;
@property (retain) NSString *defaultFromAddress;
@property BOOL shouldExpandGroups;
@property long long addressDisplayMode;
@property (retain) NSArray *intranetDomains;
@property BOOL shouldCheckIntranetDomains;
@property (readonly) BOOL intranetDomainsManagedByProfile;
@property BOOL disableRemoteContent;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_postPreferencesDidChangeNotifications;
- (void)_preferencesChangedExternally:(id)a0;

@end
