@class NSXPCConnection, NSString, NSURL, NSArray, NSDate, NSAttributedString, SUMajorProduct, NSError, NSObject, SUUpdateProduct;
@protocol OS_dispatch_queue;

@interface SUAppStoreUpdate : NSObject <NSSecureCoding> {
    SUUpdateProduct *_product;
    NSError *_updateError;
    long long _lastState;
    NSObject<OS_dispatch_queue> *_q;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSXPCConnection *connection;
@property (readonly, retain) NSString *title;
@property (readonly, retain) NSString *versionString;
@property (readonly, retain) NSString *longDescription;
@property (readonly, retain) NSAttributedString *longAttributedDescription;
@property (readonly) long long downloadSize;
@property (readonly, retain) NSDate *postDate;
@property (readonly) long long action;
@property (readonly, retain) NSString *currentLocalization;
@property (readonly, retain) NSAttributedString *licenseAgreement;
@property (readonly, retain) NSAttributedString *firmwareWarning;
@property (readonly, retain) NSDate *deferredUntilDate;
@property (readonly, retain) NSString *productKey;
@property (readonly, retain) NSArray *tags;
@property (readonly, retain) id auxInfo;
@property (readonly) BOOL isRecommended;
@property (readonly) BOOL isRamped;
@property (readonly) BOOL isAutoUpdateEligible;
@property (readonly) BOOL allowedToUseInstallLater;
@property (readonly) BOOL isAdminDeferred;
@property (readonly) NSDate *adminDeferredToDate;
@property (readonly) BOOL isCritical;
@property (readonly) BOOL isConfigData;
@property (readonly) BOOL isMajorOSUpdate;
@property (readonly, retain) SUMajorProduct *majorProduct;
@property (readonly) BOOL isMajorOSUpdateInternal;
@property (readonly) long long autoInstallWithDelayInHours;
@property (readonly, retain) NSString *customTitleForUpdateAvailableNotification;
@property (readonly, retain) NSString *customTextForUpdateAvailableNotification;
@property (readonly) BOOL showPostInstallNotification;
@property (readonly, retain) NSString *customTitleForPostInstallNotification;
@property (readonly, retain) NSString *customTextForPostInstallNotification;
@property (readonly, retain) NSURL *customURLForPostInstallNotification;
@property (readonly, retain) NSArray *applicationIdentifiersToClose;
@property (readonly, retain) NSError *updateError;
@property (readonly) BOOL canRetry;

+ (BOOL)_connectToService;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithProduct:(id)a0;
- (id)_product;
- (void)_setCurrentStatus:(id)a0;
- (void)_setProduct:(id)a0;
- (id)initWithProductKey:(id)a0 title:(id)a1 longDescription:(id)a2;

@end
