@class NSString, NSArray, SCContentFilterAppsAndWindowsPinnedToDisplayInformation, SCContentFilterDisplayInformation, SCContentFilterDesktopIndependentWindowInformation, NSDictionary, SCWindow, NSMutableArray, SCDisplay;

@interface SCContentFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long source;
@property (retain, nonatomic) NSDictionary *serializedCompositionConfig;
@property (copy, nonatomic) NSDictionary *serializedDefaultPickerConfig;
@property (copy, nonatomic) NSDictionary *serializedPickerConfig;
@property (nonatomic) NSString *filterID;
@property (copy, nonatomic) NSArray *ignoredExcludedBundleIDs;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) SCContentFilterDisplayInformation *displayInfo;
@property (readonly, nonatomic) SCContentFilterAppsAndWindowsPinnedToDisplayInformation *appsAndWindowsPinnedToDisplayInfo;
@property (readonly, nonatomic) SCContentFilterDesktopIndependentWindowInformation *desktopIndependentWindowInfo;
@property (retain, nonatomic) NSMutableArray *internalIncludedWindows;
@property (retain, nonatomic) NSMutableArray *excludedWindows;
@property (retain, nonatomic) NSArray *internalIncludedApplications;
@property (retain, nonatomic) NSArray *excludedApplications;
@property (retain, nonatomic) SCWindow *individualWindow;
@property (retain, nonatomic) SCDisplay *display;
@property (nonatomic) BOOL shareAll;
@property (nonatomic) long long filterType;
@property (retain, nonatomic) NSString *filterID;
@property (retain, nonatomic) NSDictionary *serializedCompositionConfig;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *serializedPickerConfig;
@property (copy, nonatomic) NSDictionary *serializedDefaultPickerConfig;
@property (copy, nonatomic) NSArray *ignoredExcludedBundleIDs;
@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) float pointPixelScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) BOOL includeMenuBar;
@property (readonly, nonatomic) NSArray *includedDisplays;
@property (readonly, nonatomic) NSArray *includedApplications;
@property (readonly, nonatomic) NSArray *includedWindows;

+ (BOOL)isValidContentFilterType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)addWindow:(id)a0;
- (BOOL)removeWindow:(id)a0;
- (id)serialize;
- (id)includedWindows;
- (id)includedApplications;
- (id)initWithDesktopIndependentWindow:(id)a0;
- (id)initWithDisplayId:(unsigned int)a0;
- (BOOL)inIndividualWindowWithWindowID:(unsigned int)a0;
- (void)addIncludedApplication:(id)a0;
- (void)appendWithIncludedWindows:(id)a0 includedBundleIDs:(id)a1;
- (BOOL)canModifyWindows;
- (BOOL)checkApplications:(id)a0 doesContainWindow:(id)a1;
- (id)createNewContentFilterWithAdditionalWindow:(id)a0 display:(id)a1;
- (id)deserializeApplications:(id)a0 bundleIDs:(id)a1;
- (id)deserializeWindows:(id)a0;
- (BOOL)displayHasWindow:(id)a0;
- (BOOL)inExcludedApplicationsWithWindow:(id)a0;
- (BOOL)inExcludedWindows:(id)a0;
- (BOOL)inIncludedApplicationsWithWindow:(id)a0;
- (BOOL)inIncludedWindows:(id)a0;
- (BOOL)inIndividualWindow:(id)a0;
- (BOOL)inPickerExcludedApplicationsWithWindow:(id)a0;
- (BOOL)inPickerExcludedWindows:(id)a0;
- (id)includedDisplays;
- (id)initSharingNothing;
- (id)initWithDisplay:(id)a0 excludingApplications:(id)a1 exceptingWindows:(id)a2;
- (id)initWithDisplay:(id)a0 excludingWindows:(id)a1;
- (id)initWithDisplay:(id)a0 includingApplications:(id)a1 exceptingWindows:(id)a2;
- (id)initWithDisplay:(id)a0 includingWindows:(id)a1;
- (id)initWithDisplayId:(unsigned int)a0 bundleIds:(id)a1;
- (id)initWithDisplayId:(unsigned int)a0 windowIds:(id)a1;
- (id)initWithWindowId:(unsigned int)a0;
- (BOOL)isCapturingApplications;
- (BOOL)isCapturingWindows;
- (BOOL)isEqualToSCContentFilter:(id)a0;
- (id)preservedSerialize;
- (void)printProperties:(id)a0;
- (BOOL)removeFromIncludedWindowsWithWindowID:(unsigned int)a0 canReplaceFilter:(BOOL)a1;
- (void)removeIncludedApplication:(id)a0;
- (void)setContentsAndStreamType;

@end
