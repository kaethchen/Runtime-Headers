@class NSURLSession, NSArray, NSDictionary, NSURL, NSString, NSOperationQueue;
@protocol RemoteNotificationVerificationRequestProxyDelegate;

@interface RemoteNotificationVerificationRequestProxy : RemoteNotificationCenterRequest {
    id<RemoteNotificationVerificationRequestProxyDelegate> _delegate;
    NSURL *_referrerURL;
    NSURL *_apiURL;
    NSString *_bundleDownloadPath;
    NSURLSession *_remoteBundleDownloadSession;
    NSOperationQueue *_remoteBundleVerificationOperationQueue;
    BOOL _performingVerificationTest;
}

@property (copy, nonatomic) NSDictionary *queryParameters;
@property (nonatomic) unsigned long long requestID;
@property (readonly, nonatomic) NSArray *allowedDomains;

- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (id)_bundleDownloadPathWithTemporaryLocation:(id)a0;
- (BOOL)_cleanlyCreateNotificationBundleForExtractedPackage:(id)a0 withDisplayName:(id)a1;
- (BOOL)_createICNSFileInExtractedPackage:(id)a0 replaceIfExists:(BOOL)a1;
- (BOOL)_createNotificationBundleForExtractedPackage:(id)a0 atBundleDestination:(id)a1 withDisplayName:(id)a2;
- (void)_downloadFirstValidRemoteNotificationBundleWithAPIVersions:(id)a0;
- (id)_expectedHashForFilename:(id)a0 manifest:(id)a1 bundleVersion:(long long)a2;
- (void)_handshakeDidFailWithErrorMessage:(id)a0;
- (void)_handshakeDidPassWithReferrerReferrerURLHost:(id)a0;
- (id)_hashStringForFileWithName:(id)a0 path:(id)a1 manifest:(id)a2 bundleVersion:(long long)a3;
- (void)_moveFilesIntoPlaceFromPath:(id)a0 websiteData:(id)a1 allowedDomains:(id)a2;
- (void)_verifyBundleContents:(id)a0 bundleVersion:(long long)a1;
- (BOOL)_verifyManifestHashes:(id)a0 bundleVersion:(long long)a1;
- (void)_verifyReferrerURLAndAllowedDomains:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_verifySignature:(id)a0;
- (BOOL)createLocalNotificationBundleFromWebsiteInfo:(id)a0;
- (void)createNotificationBundleFromPath:(id)a0 displayName:(id)a1;
- (id)initWithWebsiteIdentifier:(id)a0 apiURL:(id)a1 referrerURL:(id)a2 requestID:(unsigned long long)a3 delegate:(id)a4;
- (void)migrateIconInBundleToAppIcon;
- (void)startHandshake;

@end
