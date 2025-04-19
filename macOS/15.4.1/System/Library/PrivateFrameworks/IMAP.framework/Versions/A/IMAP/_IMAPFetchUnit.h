@class IMAPFetchDataItem, IMAPFetchResult;

@interface _IMAPFetchUnit : NSObject

@property (nonatomic) unsigned int uid;
@property (retain, nonatomic) IMAPFetchDataItem *fetchItem;
@property (retain, nonatomic) IMAPFetchResult *expectedFetchResult;
@property (nonatomic) unsigned int expectedLength;

- (id)description;
- (void).cxx_destruct;
- (void)_setupExpectedFetchResult;
- (BOOL)matchesFetchResponse:(id)a0;
- (id)newFailedFetchResponse;

@end
