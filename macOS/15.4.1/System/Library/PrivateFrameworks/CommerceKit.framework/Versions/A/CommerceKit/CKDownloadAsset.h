@class NSString, NSArray, NSURL;

@interface CKDownloadAsset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *downloadKey;
@property (copy) NSString *md5;
@property (retain) NSString *appliesToVersionIdentifier;
@property (retain) NSArray *sinfs;
@property (readonly) BOOL needsDecryption;
@property unsigned long long chunkSize;
@property (retain) NSArray *hashes;
@property (retain) NSArray *clearHashes;
@property (readonly) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithURL:(id)a0;

@end
