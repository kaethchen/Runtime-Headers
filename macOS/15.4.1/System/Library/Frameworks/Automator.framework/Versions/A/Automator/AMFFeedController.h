@class NSOperationQueue, NSMutableDictionary, NSURLSession;

@interface AMFFeedController : NSObject

@property (retain) NSMutableDictionary *_feedsByURL;
@property (retain) NSOperationQueue *_feedDownloadQueue;
@property (retain) NSOperationQueue *_feedParseQueue;
@property (retain) NSURLSession *_feedDownloadURLSession;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_feedParsedAtURL:(id)a0 metadata:(id)a1 entries:(id)a2 completionHandler:(id /* block */)a3;
- (void)_parseFeedAtURL:(id)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)_refreshFeedAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)existingFeedAtURL:(id)a0;
- (void)feedAtURL:(id)a0 refreshRequired:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)refreshFeed:(id)a0 completionHandler:(id /* block */)a1;

@end
