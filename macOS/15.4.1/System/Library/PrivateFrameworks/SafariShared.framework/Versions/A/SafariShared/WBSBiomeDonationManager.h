@class _WBSBiomeStream, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBiomeDonationManager : NSObject {
    NSObject<OS_dispatch_queue> *_streamAccessQueue;
    _WBSBiomeStream *_autoPlayStream;
    _WBSBiomeStream *_navigationsStream;
    _WBSBiomeStream *_webPagePerformanceStream;
    _WBSBiomeStream *_webAppInFocusStream;
    _WBSBiomeStream *_pageLoadStream;
    _WBSBiomeStream *_websitesBlockingQuitStream;
    _WBSBiomeStream *_windowProxyStream;
    _WBSBiomeStream *_memoryFootprintStream;
    _WBSBiomeStream *_browsingAssistantStream;
}

@property (class, readonly, nonatomic) WBSBiomeDonationManager *sharedManager;
@property (class, readonly, nonatomic) BOOL isBiomeStreamDonationAvailable;

@property (readonly, nonatomic) _WBSBiomeStream *_windowProxyStream;

+ (long long)entityComponentTypeFromResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_autoPlayStream;
- (void)_donateBrowsingAssistantEvents:(id)a0 dimensionContext:(id)a1 bloomFilterPassed:(id)a2 eligible:(id)a3 webpageUrlSent:(id)a4 serverRequest:(id)a5 render:(id)a6 userInteraction:(id)a7;
- (id)_pageLoadStream;
- (int)_biomeDeviceClassForUserAgent:(long long)a0;
- (int)_biomePageLoadDeviceClassForUserAgent:(long long)a0;
- (int)_biomeSignalForAutoPlaySignal:(long long)a0;
- (int)_biomeWebAppInFocusWebAppTypeForWebAppType:(long long)a0;
- (id)_browsingAssistantStream;
- (void)_clearEventsDonatedSinceDate:(id)a0;
- (void)_donateWebPagePerformanceEventWithEvent:(int)a0 domain:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (id)_getVisualComponentAttributeFromComponentType:(long long)a0;
- (id)_memoryFootprintStream;
- (id)_navigationsStream;
- (id)_webAppInFocusStream;
- (id)_webPagePerformanceStream;
- (int)_webPerformanceEventForDiagnosticLoggingKey:(id)a0;
- (id)_websitesBlockingQuitStream;
- (void)clearEventsDonatedSinceDate:(id)a0;
- (void)donateAutoPlayEventWithSignal:(long long)a0 domain:(id)a1 countryCode:(id)a2 webPageLoadedOverPrivateRelay:(BOOL)a3;
- (void)donateBrowsingAssistantBloomFilterPassedEventWithWebPageID:(id)a0;
- (void)donateBrowsingAssistantEligibleEventWithWebPageID:(id)a0;
- (void)donateBrowsingAssistantReaderEventWithWebPageID:(id)a0 eventType:(long long)a1 dataToReport:(id)a2;
- (void)donateBrowsingAssistantServerRequestEndedEventWithWebPageID:(id)a0 requestIdentifier:(id)a1;
- (void)donateBrowsingAssistantServerRequestFailedEventWithWebPageID:(id)a0 requestIdentifier:(id)a1;
- (void)donateBrowsingAssistantServerRequestStartedEventWithWebPageID:(id)a0 requestIdentifier:(id)a1 requestType:(long long)a2;
- (void)donateBrowsingAssistantUserInteractionDetectedWithWebPageID:(id)a0 componentType:(long long)a1 componentIdentifier:(id)a2 tableOfContentsArrayLength:(id)a3 tableOfContentsTextIndex:(id)a4 readerSectionExpanded:(BOOL)a5;
- (void)donateBrowsingAssistantVisualComponentPresentationEndedWithWebPageID:(id)a0 componentType:(long long)a1 componentIdentifier:(id)a2 hideReason:(long long)a3;
- (void)donateBrowsingAssistantVisualComponentPresentationStartedWithWebPageID:(id)a0 componentType:(long long)a1 componentIdentifier:(id)a2 tableOfContentsArrayLength:(id)a3;
- (void)donateBrowsingAssistantWebPageStartedEventWithWebPageID:(id)a0;
- (void)donateBrowsingAssistantWebpageURLSentWithWebPageID:(id)a0 urlSent:(id)a1;
- (BOOL)donateForDiagnosticLoggingKey:(id)a0 value:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (void)donateMemoryFootprint:(unsigned long long)a0 withDomain:(id)a1 pageCount:(unsigned long long)a2 processLifetime:(double)a3 inForeground:(BOOL)a4 wasPrivateRelayed:(BOOL)a5 canSuspend:(BOOL)a6;
- (void)donateNavigationWithURL:(id)a0 userAgent:(long long)a1 wasPrivateRelayed:(BOOL)a2 privateRelayVendorName:(id)a3 statusCode:(long long)a4;
- (void)donatePageLoadWithUserAgent:(long long)a0 wasSearch:(BOOL)a1 wasPrivateBrowsing:(BOOL)a2 wasActualized:(BOOL)a3 provenance:(long long)a4;
- (void)donateWebAppInFocusEventWithStarting:(BOOL)a0 date:(id)a1 webAppType:(long long)a2 identifier:(id)a3 name:(id)a4 manifestId:(id)a5;
- (void)donateWebsiteBlockingQuit:(id)a0 blockingReason:(long long)a1;
- (void)performPendingDeletionsBeforeTermination;

@end
