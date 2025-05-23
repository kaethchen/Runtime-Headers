@class NSString, NSArray;

@interface WFDevice : NSObject <WFNaming>

@property (class, readonly, nonatomic) WFDevice *currentDevice;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } capabilitiesLock;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenBounds;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double screenCornerRadius;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *systemBuildNumber;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSString *localizedWiFiDisplayName;
@property (readonly, nonatomic) NSString *marketingName;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long chipID;
@property (readonly, nonatomic) NSString *localStorageDisplayName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) BOOL hasSystemAperture;
@property (readonly, nonatomic) BOOL hasPairedAndSetUpWatch;
@property (readonly, nonatomic) BOOL isChineseRegionDevice;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (BOOL)deviceIsChinaSKU;
+ (BOOL)deviceIsGreenTea;
+ (id)systemShortcutsUserDefaults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasCapability:(id)a0;
- (BOOL)idiomSupportsPosters:(long long)a0;

@end
