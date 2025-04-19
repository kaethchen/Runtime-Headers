@class NSString, NSObject;
@protocol LACSharedModeDataSource, OS_dispatch_queue;

@interface LACSharedModeDataSourceDefaultsDecorator : NSObject <LACSharedModeDataSource> {
    id<LACSharedModeDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
