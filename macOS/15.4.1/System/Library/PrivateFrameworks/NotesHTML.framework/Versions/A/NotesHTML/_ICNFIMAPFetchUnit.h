@class ICNFIMAPFetchResult, ICNFIMAPClientFetchDataItem;

@interface _ICNFIMAPFetchUnit : NSObject

@property (nonatomic) unsigned int uid;
@property (retain, nonatomic) ICNFIMAPClientFetchDataItem *fetchItem;
@property (retain, nonatomic) ICNFIMAPFetchResult *expectedFetchResult;
@property (nonatomic) unsigned int expectedLength;

- (id)description;
- (void).cxx_destruct;
- (void)_setupExpectedFetchResult;
- (BOOL)matchesFetchResponse:(id)a0;
- (id)newFailedFetchResponse;

@end
