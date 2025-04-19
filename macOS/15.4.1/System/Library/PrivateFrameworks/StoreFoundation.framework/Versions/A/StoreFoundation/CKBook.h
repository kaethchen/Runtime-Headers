@class SSPurchase, NSMutableDictionary, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface CKBook : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *externalMetadata;
@property (copy) NSURL *coverImageURL;
@property (copy) NSNumber *jaliscoItemIdentifier;
@property (copy) NSString *path;
@property BOOL isLocal;
@property (copy) NSString *title;
@property (copy) NSString *author;
@property (copy) NSString *category;
@property (copy) NSString *sortName;
@property (copy) NSDate *purchaseDate;
@property (copy) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSNumber *itemIdentifier;
@property (copy) NSNumber *publicationVersion;
@property (copy) NSString *publicationDisplayVersion;
@property (copy) NSDictionary *bookInfo;
@property (copy) NSDictionary *iTunesMetaData;
@property (copy) NSString *redownloadBuyParams;
@property (copy) NSNumber *downloadAssetSize;
@property (copy) NSString *updateBuyParams;
@property (readonly) SSPurchase *redownloadPurchase;
@property (readonly) SSPurchase *updatePurchase;
@property (readonly) BOOL isPreorder;
@property (copy) NSDate *expectedReleaseDate;
@property (copy) NSNumber *daapPurchasedToken;
@property (copy) NSNumber *daapItemIdentifier;

+ (id)_imageFetchQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)_copyLibraryPropertiesFromBook:(id)a0;
- (void)fetchCoverImageWithCompletionHandler:(id /* block */)a0;
- (id)getItemIdentifier;
- (BOOL)isEqualToBook:(id)a0;

@end
