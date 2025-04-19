@protocol FCArticleDownloadServiceType, FCANFHelper, FCContentContext;

@interface FCIssueDownloadService : NSObject <FCIssueDownloadServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCANFHelper> ANFHelper;
@property (readonly, nonatomic) id<FCArticleDownloadServiceType> articleDownloadService;

- (id)init;
- (void).cxx_destruct;
- (id)fetchCachedIssueWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 ANFHelper:(id)a1 articleDownloadService:(id)a2;
- (long long)isIssueDownloadedEnoughToRead:(id)a0;

@end
