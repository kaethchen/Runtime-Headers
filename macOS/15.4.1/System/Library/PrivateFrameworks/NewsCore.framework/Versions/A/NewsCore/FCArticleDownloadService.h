@protocol FCANFHelper, FCContentContext;

@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCANFHelper> ANFHelper;

- (id)init;
- (void).cxx_destruct;
- (id)fetchCachedArticleWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchCachedAudioWithArticleID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 ANFHelper:(id)a1;
- (BOOL)isArticleDownloadedEnoughToListen:(id)a0;
- (BOOL)isArticleDownloadedEnoughToRead:(id)a0;

@end
