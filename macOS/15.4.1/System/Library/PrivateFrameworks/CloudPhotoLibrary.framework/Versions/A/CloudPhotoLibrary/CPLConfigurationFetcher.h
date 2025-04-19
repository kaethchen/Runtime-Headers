@class NSURLSession, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CPLConfigurationFetcherDelegate;

@interface CPLConfigurationFetcher : NSObject {
    NSURLSession *_currentSession;
    NSMutableArray *_completionHandlers;
}

@property (readonly, nonatomic) NSURL *configurationURL;
@property (readonly, weak, nonatomic) id<CPLConfigurationFetcherDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_updateConfigurationWithFetchData:(id)a0 fetchError:(id)a1 fetchURL:(id)a2 fromConfigurationDictionary:(id)a3;
- (void)fetchConfigurationDictionary:(id)a0;
- (void)fetchConfigurationDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfigurationURL:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
