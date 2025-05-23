@class NSObject, NSString, NSDictionary, NSURL, TVPPlayer, NSError, VUIStoreFPSKeyLoader;

@interface VUIStoreAuxMediaItem : VUIBaseMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>

@property (class, readonly, nonatomic) NSString *mediaUserAgent;

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) TVPPlayer *scrubPlayer;
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader;
@property (retain, nonatomic) NSError *fpsKeyError;
@property (retain, nonatomic) NSObject *parentReportingToken;
@property (nonatomic) long long playbackType;
@property (nonatomic) BOOL isHLS;
@property (copy, nonatomic) NSURL *streamingOverrideURLForDownload;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic) BOOL isAudioOnly;
@property (copy, nonatomic) NSString *bookmarkID;
@property (nonatomic) BOOL disableResumeMenu;
@property (nonatomic) BOOL disableScrubbing;
@property (nonatomic) BOOL isiTunesPurchasedOrRentedContent;
@property (nonatomic) BOOL ignoreExistingOfflineKeyData;
@property (nonatomic) BOOL isFamilySharingContent;
@property (nonatomic) BOOL isLiveContent;
@property (nonatomic) BOOL isSportingEvent;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) BOOL sendsLocationToPlaybackKeyServerWhenOptedIn;
@property (nonatomic) BOOL sendsMescalHeaderToPlaybackKeyServer;
@property (nonatomic) BOOL ignoreStartOverParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)isEqualToMediaItem:(id)a0;
- (id)reportingDelegate;
- (void)mediaItem:(id)a0 errorDidOccur:(id)a1 player:(id)a2;
- (void)cleanUpMediaItem;
- (BOOL)hasTrait:(id)a0;
- (void)loadFairPlayStreamingKeyRequests:(id)a0;
- (void)loadFairPlayStreamingKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)mediaItem:(id)a0 didChangeFromPlaybackState:(id)a1 toPlaybackState:(id)a2 updatedRate:(double)a3 player:(id)a4;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)mediaItemURL;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (id)replacementErrorForPlaybackError:(id)a0;
- (void)setMediaItemMetadata:(id)a0 forProperty:(id)a1;
- (void)updateBookmarkWithSuggestedTime:(double)a0 forElapsedTime:(double)a1 duration:(double)a2 playbackOfMediaItemIsEnding:(BOOL)a3;
- (void)_keepKeyLoaderAlive:(id)a0;
- (id)_replacementErrorForITunesPlaybackError:(id)a0;
- (id)_replacementErrorForPlaybackError:(id)a0;
- (void)_scrubPlayerItemDidLoad:(id)a0;
- (void)resetReportingEventCollection;
- (void)storeFPSKeyLoader:(id)a0 didLoadOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)storeFPSKeyLoader:(id)a0 willFailWithError:(id)a1 forKeyRequest:(id)a2;

@end
