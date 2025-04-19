@class NSArray, SCDisplay;

@interface SCContentFilterAppsAndWindowsPinnedToDisplayInformation : NSObject

@property (readonly, nonatomic) SCDisplay *display;
@property (readonly, nonatomic) NSArray *includedApplications;
@property (readonly, nonatomic) NSArray *excludedApplicationWindows;
@property (readonly, nonatomic) NSArray *includedWindows;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0 includedApps:(id)a1 excludedAppWindows:(id)a2 includedWindows:(id)a3;
- (BOOL)isEqualToSCContentFilterAppsAndWindowsPinnedToDisplayInformation:(id)a0;

@end
