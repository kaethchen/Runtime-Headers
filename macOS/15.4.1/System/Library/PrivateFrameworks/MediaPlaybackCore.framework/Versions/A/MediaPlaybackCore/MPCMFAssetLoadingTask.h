@class NSString;
@protocol MFAssetLoadingTask;

@interface MPCMFAssetLoadingTask : NSObject <MPAVItemAssetTask> {
    id<MFAssetLoadingTask> _mfTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrap:(id)a0;

- (void).cxx_destruct;
- (BOOL)isCancelled;

@end
