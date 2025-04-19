@class RWIBaseManager, NSArray, RWIServiceConnection, NSString, NSImage, NSMutableDictionary;
@protocol RWITargetDelegate;

@interface RWITarget : NSObject {
    NSMutableDictionary *_applications;
    NSMutableDictionary *_drivers;
    BOOL _wantsAutomaticInspectionEnabled;
}

@property (readonly, nonatomic) RWIBaseManager *manager;
@property (retain, nonatomic) RWIServiceConnection *connection;
@property (readonly, nonatomic) NSArray *allApplications;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL supportsRemoteWebInspector;
@property (nonatomic) long long readyState;
@property (readonly, nonatomic) NSString *loggingIdentifier;
@property (weak, nonatomic) id<RWITargetDelegate> delegate;
@property (readonly, nonatomic, getter=isCapable) BOOL capable;
@property (readonly, nonatomic) BOOL supportsWebDriver;
@property (readonly, nonatomic) BOOL supportsApplicationIcons;
@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) BOOL isIOS;
@property (readonly, nonatomic) BOOL isDevice;
@property (readonly, nonatomic) BOOL isSimulator;
@property (readonly, nonatomic) BOOL isMachine;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *udid;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSArray *applications;
@property (readonly, nonatomic) NSArray *activeApplications;
@property (readonly, nonatomic) NSArray *drivers;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSImage *symbolImage;
@property (nonatomic) BOOL automaticInspectionEnabled;
@property (readonly, nonatomic) long long automationAvailability;

- (id)description;
- (void).cxx_destruct;
- (id)allApplications;
- (BOOL)isReady;
- (id)initWithManager:(id)a0;
- (void)addApplication:(id)a0;
- (void)removeApplication:(id)a0;
- (BOOL)isDevice;
- (BOOL)isSimulator;
- (BOOL)isIOS;
- (id)activeApplications;
- (long long)compareForDisplayWith:(id)a0;
- (BOOL)isMachine;
- (void)addDriver:(id)a0;
- (id)applicationWithIdentifier:(id)a0;
- (id)driverWithIdentifier:(id)a0;
- (id)initWithUDID:(id)a0 name:(id)a1 manager:(id)a2;
- (void)inspectAutomaticInspectionCandidate:(id)a0 pauseImmediately:(BOOL)a1;
- (void)launchOrActivateApplicationWithBundleIdentifier:(id)a0;
- (void)markAsHavingBasicInformation;
- (void)removeDriver:(id)a0;
- (void)setName:(id)a0 udid:(id)a1 buildVersion:(id)a2 productVersion:(id)a3 supportsRemoteWebInspector:(BOOL)a4;
- (void)shouldAcceptAutomaticInspectionCandidate:(id)a0 completionHandler:(id /* block */)a1;
- (void)targetStateChanged;

@end
