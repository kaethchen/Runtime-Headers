@class WBSBookmarkFolderTouchIconConfiguration, NSArray, NSString, NSMutableDictionary, NSObject, NSColor;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_bookmarkFolderIdentifiersToRequestSets;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
}

@property (readonly, nonatomic) NSArray *allFolderUUIDs;
@property (readonly) NSColor *backgroundColor;
@property (readonly, nonatomic) WBSBookmarkFolderTouchIconConfiguration *configuration;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_appUsesLeftToRightLayout;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)_prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)contentOfFolderDidUpdateWithUUID:(id)a0;
- (id)defaultFolderIconForRequest:(id)a0;
- (id)folderUUIDForRequest:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)requestsWithFolderUUIDsDidBecomeInvalid:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (id)subrequestsForRequest:(id)a0 maximumNumberOfSubrequests:(unsigned long long)a1;
- (id)_arrayByPaddingArray:(id)a0 toMaximumNumberOfThumbnailsWithObject:(id)a1;
- (void)_coalesceResponseDispatchForRequest:(id)a0;
- (void)_dispatchResponseForRequest:(id)a0;
- (void)_dispatchResponseForRequest:(id)a0 touchIcon:(id)a1;
- (id)_drawTouchIconForRequest:(id)a0;
- (void)_registerInfo:(id)a0 forRequest:(id)a1;
- (void)_stopWatchingUpdatesForRequests:(id)a0;
- (id)cachedImageForFolderUUID:(id)a0;
- (BOOL)canProvideUpdatesForRequest:(id)a0;
- (void)didCreateTouchIcon:(id)a0;

@end
