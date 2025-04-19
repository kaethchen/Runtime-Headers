@class NSString, NSURL, NSDate, NSNumber;

@interface CKDAAPItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *identifier;
@property (readonly) NSNumber *storeIdentifier;
@property (readonly) NSNumber *purchasedToken;
@property (readonly) NSString *title;
@property (readonly) NSString *author;
@property (readonly) NSString *category;
@property (readonly) NSString *sortName;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *uniqueIdentifier;
@property (readonly) NSNumber *publicationVersion;
@property (readonly) NSString *publicationDisplayVersion;
@property (readonly) NSString *redownloadBuyParams;
@property (readonly) NSNumber *downloadAssetSize;
@property (readonly) NSString *updateBuyParams;
@property (readonly) BOOL isPreorder;
@property (readonly) NSDate *expectedReleaseDate;
@property (readonly) NSURL *artworkURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDAAPDictionary:(id)a0;

@end
