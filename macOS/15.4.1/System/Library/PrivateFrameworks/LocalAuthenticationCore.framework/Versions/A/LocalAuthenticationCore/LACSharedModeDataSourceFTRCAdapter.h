@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LACSharedModeDataSourceFTRCAdapter : NSObject <LACSharedModeDataSource> {
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_workQueue;

@end
