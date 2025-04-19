@class NSString, NSURL, NSDate, NSNumber;

@interface BKBookKitBook : NSObject

@property (retain) NSString *assetID;
@property (retain) NSString *storeID;
@property (retain) NSString *author;
@property (retain) NSString *sortAuthor;
@property (retain) NSString *title;
@property (retain) NSString *sortTitle;
@property (retain) NSString *scrollDirection;
@property (retain) NSURL *url;
@property (retain) NSString *genre;
@property (getter=isSample) BOOL sample;
@property (getter=isLocked) BOOL locked;
@property (getter=isProof) BOOL proof;
@property (getter=isCompressed) BOOL compressed;
@property long long generation;
@property long long metadataMigrationVersion;
@property long long fileSize;
@property unsigned long long storeFrontID;
@property long long contentType;
@property (retain) NSNumber *isExplicit;
@property (retain) NSDate *dataSourceInsertionDate;
@property (retain) NSDate *releaseDate;
@property (retain) NSDate *purchaseDate;
@property (retain) NSDate *expectedDate;
@property (retain) NSDate *lastOpenDate;
@property BOOL hasPendingUpdate;
@property long long pageCount;
@property long long rating;
@property (retain) NSDate *updateDate;
@property (retain) NSString *bookDescription;
@property (retain) NSString *comments;
@property (retain) NSString *kind;
@property (retain) NSString *year;
@property (retain) NSString *grouping;
@property BOOL computedRating;
@property (retain) NSNumber *versionNumber;
@property (retain) NSString *versionNumberHumanReadable;
@property (retain) NSString *seriesID;
@property (readonly) NSNumber *seriesIsHidden;
@property (retain) NSString *sequenceDisplayName;
@property (retain) NSString *pageProgressionDirection;
@property (retain) NSURL *permlink;

+ (id)assetIDFromBookMetadata:(id)a0;
+ (id)bookWithBookMetadata:(id)a0 error:(id *)a1;
+ (long long)contentTypeForExtension:(id)a0;
+ (long long)contentTypeForPath:(id)a0;
+ (id)dateFromMetadataDate:(id)a0;
+ (BOOL)isSupplementalPDFFromBookMetadata:(id)a0;
+ (id)purchaseDateFromBookMetadata:(id)a0;
+ (id)releaseDateFromBookMetadata:(id)a0;
+ (id)stringByStrippingHTML:(id)a0;
+ (id)stringOrStringValue:(id)a0;
+ (id)updateDateFromBookMetadata:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBookMetadata:(id)a0 error:(id *)a1;

@end
