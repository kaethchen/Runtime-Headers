@class NSString, NSNumber, NSArray;

@interface VUIDocumentPreFetchedDataPlaybackUpNext : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *showID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (copy, nonatomic) NSArray *excludedCanonicals;
@property (nonatomic) BOOL updateEvent;
@property (nonatomic) BOOL canAutoPlay;
@property (nonatomic) BOOL isPostPlay;
@property (nonatomic) BOOL isLiveStream;
@property (nonatomic) BOOL refetchUpNextData;

- (void).cxx_destruct;
- (id)jsonData;

@end
