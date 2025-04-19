@class NSString, NSArray, WBSBrowsingAssistantContentProvider, WBSBrowsingAssistantResult;
@protocol WBSBrowsingAssistantControllerDelegate, WBSUserDefaultObservation;

@interface WBSBrowsingAssistantController : NSObject {
    WBSBrowsingAssistantContentProvider *_contentProvider;
    id<WBSUserDefaultObservation> _userDefaultObservation;
    NSString *_previousWebpageIdentifier;
}

@property (class, readonly, nonatomic) BOOL shouldShowConsentCard;
@property (class, readonly, nonatomic) BOOL hasUserConsent;
@property (class, nonatomic) long long userConsentState;
@property (class, readonly, nonatomic) BOOL isAvailableInCurrentLocale;

@property (weak, nonatomic) id<WBSBrowsingAssistantControllerDelegate> delegate;
@property (readonly, nonatomic) WBSBrowsingAssistantResult *result;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsTitles;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsPaths;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsTrailingTexts;
@property (readonly, nonatomic, getter=isSummaryAvailable) BOOL summaryAvailable;
@property (copy, nonatomic) NSString *webpageIdentifier;
@property (copy, nonatomic) NSString *cachedReaderArticleTitle;

+ (void)didRecieveMemoryWarning;
+ (void)subscribeToAssistantAssetIfNeeded;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkAssistantAvailabilityForPageLocale:(id)a0;
- (id)_currentResultForURL:(id)a0;
- (void)_foundContentOptions:(unsigned long long)a0 fromURL:(id)a1;
- (void)_registerForUserDefaultObserverIfNeeded;
- (BOOL)_shouldContinueFetchingRemoteContent:(id)a0;
- (void)checkForAssistantContentFromPegasusForURL:(id)a0 locale:(id)a1;
- (void)checkForInWindowVideoContentFromWebView:(id)a0 url:(id)a1;
- (void)clearAssistantResult;
- (void)didFindLocalContentWithOptions:(unsigned long long)a0 forURL:(id)a1;
- (void)fetchAssistantContentFromPegasusForURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performPrefetchingOfAssistantPegasusContentAfterChangingConsentState;
- (void)updateAssistantContentForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
