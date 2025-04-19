@class NSString, ICCloudContext;

@interface ICCloudSyncBackgroundTask : NSObject <ICBackgroundTask>

@property (readonly, nonatomic) ICCloudContext *cloudContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeActivityScheduler;

@end
