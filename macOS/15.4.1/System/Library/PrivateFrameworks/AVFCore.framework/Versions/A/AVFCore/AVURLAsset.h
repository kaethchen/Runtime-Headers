@class AVURLAssetInternal, NSString, NSArray, AVAssetResourceLoader, AVMediaExtensionProperties, NSURL, NSUUID;

@interface AVURLAsset : AVAsset <AVContentKeyRecipientInternal, AVContentKeyRecipient> {
    AVURLAssetInternal *_URLAsset;
}

@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
@property (readonly, nonatomic) AVMediaExtensionProperties *mediaExtensionProperties;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSUUID *httpSessionIdentifier;

+ (id)_objectWithItemProviderFileURL:(id)a0 typeIdentifier:(id)a1 isInPlace:(BOOL)a2 error:(id *)a3;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)a0;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)a0;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;
+ (BOOL)isPlayableExtendedMIMEType:(id)a0;
+ (id)URLAssetWithURL:(id)a0 options:(id)a1;
+ (id)UTTypeIDArrayFromUTTypeArray:(id)a0;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_avfValidationPlistWithPlaylistMIMETypesTreatedAsISOBMFFMIMETypes;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)a0 assetLoggingIdentifier:(id)a1 figAssetCreationFlags:(unsigned long long *)a2 error:(id *)a3;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)a0;
+ (id)_initializationOptionsClasses;
+ (id)_streamingUTTypes;
+ (id)assetForNSURLSessionWithURL:(id)a0 propertyList:(id)a1;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (id)instanceIdentifierMapTable;
+ (BOOL)isPlayableExtendedMIMEType:(id)a0 options:(id)a1;
+ (void)setUserInfoObject:(id)a0 forURLAsset:(id)a1;
+ (id)userInfoObjectForURLAsset:(id)a0;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (BOOL)allowsConstrainedNetworkAccess;
- (BOOL)allowsExpensiveNetworkAccess;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)resolvedURL;
- (unsigned long long)downloadToken;
- (id)propertyListForNSURLSessionAssetReturningError:(id *)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracks;
- (id)creationOptions;
- (id)SHA1Digest;
- (id)_assetInspector;
- (id)_absoluteURL;
- (void)_addFigAssetNotifications;
- (id)_assetInspectorLoader;
- (int)_attachToContentKeySession:(id)a0 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a1 failedSinceAlreadyAttachedToAnotherSession:(BOOL *)a2;
- (BOOL)_attachedToExternalContentKeySession;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (Class)_classForTrackInspectors;
- (BOOL)_clientURLLoadingRepresentsAccurateNetworkStatistics;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)_doNotLogURLs;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { } *)a0 key:(struct __CFString { } *)a1;
- (BOOL)_hasResourceLoaderDelegate;
- (id)_installHandlerForNSURLSessionConfiguration:(id)a0 queue:(id)a1;
- (id)_managedAssetCache;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void)_removeFigAssetNotifications;
- (void)_removeUserInfoObject;
- (BOOL)_requiresInProcessOperation;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)a0;
- (id)_serializableCreationOptions;
- (void)_setAssetInspectorLoader:(id)a0;
- (void)_setUserInfoObject:(id)a0;
- (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
- (BOOL)_shouldPrepareToOptimizeForExclusivePlayback;
- (void)_tracksDidChange;
- (id)assetCache;
- (void)cancelLoading;
- (id)contentKeySession;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)downloadDestinationURL;
- (void)expire;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)initWithFigCreationOptions:(id)a0 options:(id)a1 figAssetCreationOptions:(id)a2 figAssetCreationFlags:(unsigned long long)a3;
- (id)initWithFileURL:(id)a0 offset:(long long)a1 length:(long long)a2 options:(id)a3;
- (id)lyrics;
- (id)originalNetworkContentURL;
- (id)recommendedDestinationURLPathExtension;
- (unsigned long long)referenceRestrictions;

@end
