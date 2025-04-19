@class NSString, LACSharedModeDataSourceTaskDecoratorRuntime, NSObject;
@protocol LACSharedModeDataSource, OS_dispatch_queue;

@interface LACSharedModeDataSourceTaskDecorator : NSObject <LACSharedModeDataSource> {
    id<LACSharedModeDataSource> _dataSource;
    LACSharedModeDataSourceTaskDecoratorRuntime *_runtime;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_sharedModeBackgroundTaskWithOptions:(id)a0;
- (id)_sharedModeFromBackgroundTaskResult:(id)a0;
- (double)_timeoutForRequestWithOptions:(id)a0;
- (void)fetchSharedModeWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)initWithDataSource:(id)a0 replyQueue:(id)a1;
- (id)initWithDataSource:(id)a0 runtime:(id)a1 replyQueue:(id)a2;

@end
