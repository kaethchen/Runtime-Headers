@class NSArray, NSString, NSURL, NSDictionary, NSDate;

@interface WBSPageCollectionMetadata : NSObject {
    NSDate *_creationDate;
    NSString *_platform;
    NSString *_osBuild;
    NSString *_webkitVersion;
    NSString *_safariVersion;
    NSString *_assetUUIDString;
}

@property (class, readonly, copy, nonatomic) NSArray *pageCollectionMetadataFormTypes;

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (copy, nonatomic) NSString *indexFileName;
@property (copy, nonatomic) NSString *screenCaptureFileName;
@property (copy, nonatomic) NSString *formType;
@property (nonatomic) BOOL savedPageLooksLikeOriginal;
@property (nonatomic) unsigned long long collectionMethod;
@property (readonly, copy, nonatomic) NSString *zipFileNameCandidate;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)init;
- (void).cxx_destruct;
- (id)_campaignName;
- (id)_languageAndRegion;
- (id)_workerID;
- (BOOL)writeMetadataJSONToURL:(id)a0 error:(id *)a1;

@end
