@class NSString, NSArray, NSDictionary, NSError, NSURLRequest, NSLock;

@interface SSDownloadAsset : NSObject <NSSecureCoding> {
    NSString *_downloadFileName;
    NSString *_downloadFolderName;
    NSString *_finalizedFileName;
    NSArray *_hashes;
    NSArray *_clearHashes;
    long long _numberOfBytesToHash;
    BOOL _isExternal;
    NSLock *_lock;
    NSString *_processedPath;
    long long _type;
    NSURLRequest *_urlRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long type;
@property (retain) NSURLRequest *URLRequest;
@property (retain) NSString *downloadFileName;
@property (readonly) NSString *downloadPath;
@property (retain) NSString *processedPath;
@property (retain) NSString *finalizedFileName;
@property (readonly) NSString *finalizedPath;
@property (getter=isExternal) BOOL external;
@property long long hashAlgorithm;
@property (retain) NSArray *hashes;
@property (retain) NSArray *clearHashes;
@property long long numberOfBytesToHash;
@property long long subType;
@property long long fileSize;
@property (retain) NSString *customDownloadPath;
@property BOOL useUniqueDownloadFolder;
@property BOOL skipInstallPhase;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *bundleVersion;
@property (retain) NSDictionary *deltaPackage;
@property BOOL deltaUpdateFailed;
@property BOOL localDeltaUpdateFailed;
@property long long localFullPackageFailureCount;
@property (retain) NSError *localCachingError;

+ (id)assetWithURL:(id)a0 type:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)downloadFolderName;
- (id)initWithURLRequest:(id)a0 type:(long long)a1;
- (void)setDownloadFolderName:(id)a0;
- (void)setLocalFileNameFromBase:(id)a0;

@end
