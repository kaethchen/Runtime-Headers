@interface TVISHTTPRequester : NSObject

+ (id)userAgent;
+ (id)_lastETagForURL:(id)a0;
+ (void)_updateETagForURLResponse:(id)a0;
+ (id)cacheServerDownloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
+ (id)cacheServerDownloadTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)cachingServerSession;
+ (id)conditionalDataTaskForURL:(id)a0 localTargetFileURL:(id)a1 completion:(id /* block */)a2;
+ (BOOL)hasPerformedDownloadForURL:(id)a0;

@end
