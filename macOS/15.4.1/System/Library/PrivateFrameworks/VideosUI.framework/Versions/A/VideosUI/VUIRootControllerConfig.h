@class NSNumber, NSArray;

@interface VUIRootControllerConfig : NSObject

@property (nonatomic) long long sidebarImagePrefetchBatchLimit;
@property (nonatomic) double programmaticOpenSidebarTimeout;
@property (nonatomic) double userDrivenSidebarTimeout;
@property (retain, nonatomic) NSNumber *normalControllerLimit;
@property (retain, nonatomic) NSNumber *warningControllerLimit;
@property (retain, nonatomic) NSNumber *criticalControllerLimit;
@property (retain, nonatomic) NSArray *doNotPurgeList;
@property (nonatomic) double stackActiveDuration;
@property (nonatomic) long long numTeachableMomentsPerUser;
@property (nonatomic) double teachableMomentSidebarTimeout;
@property (nonatomic) double teachableMomentPillUITimeout;
@property (nonatomic) double teachableBackgroundReshowTime;
@property (retain, nonatomic) NSNumber *teachableMomentImpressionsDictionaryHash;

- (id)init;
- (void).cxx_destruct;

@end
