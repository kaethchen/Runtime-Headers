@class NSArray, NSDictionary;

@interface WBSRetryableCKFetchShareMetadataOperation : WBSRetryableCKOperation

@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys;
@property (copy, nonatomic) id /* block */ perShareMetadataBlock;
@property (copy, nonatomic) id /* block */ fetchShareMetadataCompletionBlock;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;

@end
