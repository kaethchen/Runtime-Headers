@class SOCloudKitPurchaseStorageAlertController;

@interface SOCloudKitPurchaseStorageController : NSObject

@property (retain) SOCloudKitPurchaseStorageAlertController *alertController;
@property (readonly, nonatomic) BOOL isPrompting;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completion:(id /* block */)a1;

@end
