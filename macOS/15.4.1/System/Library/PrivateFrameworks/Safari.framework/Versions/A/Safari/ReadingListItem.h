@class NSMutableDictionary, NSString, NSArray, NSImage, NSDate, NSURL, WebBookmarkLeaf;

@interface ReadingListItem : NSObject <FetchableItem> {
    NSMutableDictionary *_pageURLStringToPageNumberMap;
    id _faviconToken;
}

@property (nonatomic) BOOL addedLocally;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *localPreviewText;
@property (nonatomic) BOOL hasDefaultSiteIcon;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic, setter=setURLString:) NSString *urlString;
@property (copy, nonatomic) NSString *previewText;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSDate *dateLastViewed;
@property (copy, nonatomic) NSDate *dateAdded;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSDate *dateLastFetched;
@property (readonly, nonatomic) BOOL needsInfoUpdated;
@property (nonatomic) BOOL isFetchInProgress;
@property (nonatomic) int fetchResult;
@property (readonly, nonatomic) unsigned long long numberOfFailedLoadsWithUnknownOrNonRecoverableError;
@property (readonly, nonatomic) BOOL hasErrorDuringFetch;
@property (nonatomic) BOOL isReaderAvailable;
@property (nonatomic) BOOL isArchiveOnDisk;
@property (readonly, nonatomic) NSArray *urlStringsForAdditionalPages;
@property (nonatomic) BOOL didUserExplicitlyRequestOfflineArchive;
@property (nonatomic) BOOL didAttemptToFetchIconFromImageURL;
@property (readonly, nonatomic) WebBookmarkLeaf *bookmark;
@property (readonly, nonatomic) NSString *domainString;
@property (readonly, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSURL *leadingImageURL;
@property (retain) NSImage *lastRetrievedFallbackIcon;
@property BOOL lastRetrievedFallbackIconIsGenerated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)firstPageNumber;
+ (id)keyPathsForValuesAffectingHasDefaultSiteIcon;
+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingUnread;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initAsExistingItemWithBookmark:(id)a0;
- (void)_setExtraNonSyncAttributeValue:(id)a0 forKey:(id)a1 shouldSuppressChangeNotification:(BOOL)a2;
- (void)addURLStringForAdditionalPage:(id)a0;
- (void)clearURLStringsForAdditionalPages;
- (void)didFailFetchingItemWithResult:(int)a0;
- (id)extraAttributeValueForKey:(id)a0;
- (id)extraNonSyncAttributeValueForKey:(id)a0;
- (id)initAsNewItemWithBookmark:(id)a0;
- (unsigned long long)pageNumberFromURLString:(id)a0;
- (void)removeDateLastViewed;
- (void)removeLocalPreviewText;
- (void)removeLocalTitle;
- (void)removeNonSyncAttributeValueForKey:(id)a0;
- (void)resetImageURLIconFetchAndOfflineArchiveRequestState;
- (void)setExtraAttributeValue:(id)a0 forKey:(id)a1;
- (void)setExtraNonSyncAttributeValue:(id)a0 forKey:(id)a1;
- (void)updateWithFetchedInfo:(id)a0;
- (id)urlStringFromPageNumber:(unsigned long long)a0;

@end
