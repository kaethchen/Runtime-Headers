@class NSDecimalNumber, NSString, NSDictionary, NSURL, NSDate, NSArray, NSNumber;
@protocol BFMSeries;

@interface BookFoundation.MAsset : BookFoundation.MResource <BFMAsset> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cache;
    void /* unknown type, empty encoding */ artistName;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) NSString *seriesName;
@property (nonatomic, readonly) NSString *sequenceDisplayLabel;
@property (nonatomic, readonly) NSString *contentRating;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) NSString *editionKind;
@property (nonatomic, readonly) NSString *genreName;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) BOOL hasSupplementalContent;
@property (nonatomic, readonly) BOOL isSG;
@property (nonatomic, readonly) NSURL *bookSampleDownloadURL;
@property (nonatomic, readonly) NSString *pageProgressionDirection;
@property (nonatomic, readonly) BOOL pagesAreRTL;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) BOOL supportsUnifiedProductPage;
@property (nonatomic, readonly) double averageRating;
@property (nonatomic, readonly) unsigned long long ratingCount;
@property (nonatomic, readonly) unsigned long long ratingCountForAnalytics;
@property (nonatomic, readonly) NSString *standardNotes;
@property (nonatomic, readonly) NSString *standardDescription;
@property (nonatomic, readonly) NSDate *expectedReleaseDate;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSDictionary *offer;
@property (nonatomic, readonly) BOOL isPreorder;
@property (nonatomic, readonly) NSString *priceFormatted;
@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) NSString *artworkURL;
@property (nonatomic, readonly) NSDecimalNumber *sequenceNumber;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) id<BFMSeries> seriesResource;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL isBook;
@property (nonatomic, readonly) BOOL isAudiobook;

- (void).cxx_destruct;

@end
