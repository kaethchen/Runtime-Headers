@class NSMetadataQuery, NSOperationQueue, NSString;

@interface BRDownloadProgressProxy : NSProgress {
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
    NSString *_personaID;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)start;
- (void)stop;
- (void)_queryDidReceiveUpdate:(id)a0;

@end
