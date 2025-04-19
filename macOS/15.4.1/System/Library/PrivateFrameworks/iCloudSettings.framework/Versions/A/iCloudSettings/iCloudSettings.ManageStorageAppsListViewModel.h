@class NSString;

@interface iCloudSettings.ManageStorageAppsListViewModel : NSObject {
    void /* unknown type, empty encoding */ _appsListDataModel;
    void /* unknown type, empty encoding */ _homeViewModel;
    void /* unknown type, empty encoding */ appsListDataController;
    void /* unknown type, empty encoding */ _thermometerSections;
    void /* unknown type, empty encoding */ otherAppsDisplayLabel;
    void /* unknown type, empty encoding */ primaryApps;
    void /* unknown type, empty encoding */ secondaryApps;
    void /* unknown type, empty encoding */ appModels;
    void /* unknown type, empty encoding */ isFetchingAppsList;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ loadDataTask;
    void /* unknown type, empty encoding */ appCategoryToShowWhenLoadingComplete;
    void /* unknown type, empty encoding */ urlToShowWhenLoadingComplete;
    void /* unknown type, empty encoding */ delayedDeeplinkBundleId;
    void /* unknown type, empty encoding */ analyticsController;
    void /* unknown type, empty encoding */ liftUIManager;
    void /* unknown type, empty encoding */ _navigationPath;
    void /* unknown type, empty encoding */ _onDisappearAction;
    void /* unknown type, empty encoding */ _shouldPresentAlert;
    void /* unknown type, empty encoding */ dialogIcon;
    void /* unknown type, empty encoding */ alertTitle;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ alertMessage;
    void /* unknown type, empty encoding */ _showFamilySetupSheet;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) NSString *ViewModelDidUpdateNotificationName;

- (id)init;
- (void).cxx_destruct;
- (id)expandedSubTitleForDataclass:(id)a0;
- (id)expandedSubTitleForLiverpoolBundleId:(id)a0;
- (void)fetchAppsListWithFetchHomeViewModel:(BOOL)a0 loadImages:(BOOL)a1 completionHandler:(void (^)(void))a2;
- (void)handleQuotaChangeNotification;

@end
