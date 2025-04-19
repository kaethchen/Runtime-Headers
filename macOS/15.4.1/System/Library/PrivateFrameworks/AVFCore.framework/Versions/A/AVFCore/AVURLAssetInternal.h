@class NSURL, AVAssetResourceLoader, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetCache, NSDictionary, NSObject, AVMediaExtensionProperties, AVDispatchOnce, NSArray, AVAssetCustomURLAuthentication, AVAssetClientURLRequestHelper, AVWeakReference, AVAssetInspectorLoader;
@protocol OS_dispatch_queue;

@interface AVURLAssetInternal : NSObject {
    AVAssetInspectorLoader *loader;
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVAssetCustomURLBridgeForNSURLProtocol *customURLBridgeForNSURLProtocol;
    AVAssetCustomURLAuthentication *customURLAuthenticationUsingKeychain;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    AVDispatchOnce *makeOneResourceLoaderOnly;
    AVAssetCache *assetCache;
    AVDispatchOnce *makeOneMediaExtensionPropertiesLoaderOnly;
    AVMediaExtensionProperties *mediaExtensionProperties;
    AVDispatchOnce *makeOneAssetDownloadCacheOnly;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
    NSDictionary *initializationOptions;
    BOOL hasInstanceIdentifierMapping;
    BOOL requiresSecurityScopeRelease;
    BOOL allowsExpensiveNetworkAccess;
    BOOL allowsConstrainedNetworkAccess;
    AVWeakReference *sessionReference;
}

@end
