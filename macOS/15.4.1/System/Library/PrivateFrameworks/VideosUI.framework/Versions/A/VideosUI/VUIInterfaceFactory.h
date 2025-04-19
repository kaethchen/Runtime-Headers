@class NSViewController, NSObject;
@protocol VUIGroupActivitiesManagerDelegate, VUIMusicManager, VUITimedMetadataManager, VUISeasonsDownloadViewControllerCreator, VUIPlaybackWindowManager, VUIDownloadQueueManager, VUITVAppRootViewController, VUIOpenURLHandling, VUIPlayerTipKitManager, VUIPlaybackEndManager, VUIDocumentCreator, VUITabBarProtocol, VUIPlaybackMetricsQueueManagerDelegate, VUIControllerPresenter, VUILanguageAwareStringHandling;

@interface VUIInterfaceFactory : NSObject {
    struct { BOOL respondsToViewControllerCreation; } _documentCreatorFlags;
}

@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator;
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager;
@property (retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler;
@property (retain, nonatomic) NSObject<VUITimedMetadataManager> *timedMetadataManager;
@property (retain, nonatomic) NSObject<VUIMusicManager> *musicManager;
@property (retain, nonatomic) NSObject<VUIPlaybackMetricsQueueManagerDelegate> *playbackMetricsQueueManager;
@property (retain, nonatomic) NSObject<VUIPlaybackEndManager> *playbackEndManager;
@property (retain, nonatomic) NSObject<VUIPlayerTipKitManager> *playerTipKitManager;
@property (retain, nonatomic) NSObject<VUISeasonsDownloadViewControllerCreator> *seasonsControllerCreator;
@property (retain, nonatomic) NSObject<VUIPlaybackWindowManager> *playbackWindowManager;
@property (retain, nonatomic) NSObject<VUIDownloadQueueManager> *downloadQueueManager;
@property (readonly, nonatomic) NSObject<VUIControllerPresenter> *controllerPresenter;
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *welcomeScreenControllerPresenter;
@property (retain, nonatomic) NSObject<VUITabBarProtocol, VUITVAppRootViewController> *tabBarController;
@property (retain, nonatomic) NSViewController *rootPresentingViewController;
@property (retain, nonatomic) NSObject<VUILanguageAwareStringHandling> *languageStringHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)rootSplitViewController;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;

@end
