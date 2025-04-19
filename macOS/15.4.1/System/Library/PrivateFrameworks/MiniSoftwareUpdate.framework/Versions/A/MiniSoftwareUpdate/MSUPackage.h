@class NSString, PKPackageReference, NSURL, NSNumber, PKPackageInfo;

@interface MSUPackage : NSObject

@property (retain) NSURL *URL;
@property (retain) NSNumber *size;
@property (retain) NSString *digest;
@property (retain) NSURL *metadataURL;
@property (retain) NSURL *integrityDataURL;
@property (retain) NSString *integrityDataDigest;
@property (retain) NSNumber *integrityDataSize;
@property (retain) NSString *identifier;
@property (retain) NSString *version;
@property (retain) PKPackageInfo *packageInfo;
@property BOOL shouldDownload;
@property (readonly) PKPackageReference *packageReference;

- (void).cxx_destruct;

@end
