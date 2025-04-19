@class NSString, NSArray;

@interface IMCloudKitSyncProgress : NSObject {
    void /* unknown type, empty encoding */ descriptor;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ syncState;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ syncStatistics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ progressBarValue;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ progressBarMax;
@property (nonatomic, readonly) BOOL shouldShowProgressBar;
@property (nonatomic, readonly) BOOL shouldShowIndeterminateProgress;
@property (nonatomic, readonly) BOOL shouldShowUserMessageLabel;
@property (nonatomic, readonly) BOOL shouldShowUserActionLabel;
@property (nonatomic, readonly) NSString *progressLabel;
@property (nonatomic, readonly) NSString *userMessageLabel;
@property (nonatomic, readonly) NSString *actionLabel;
@property (nonatomic, readonly) double broadcastDeferralOverride;
@property (nonatomic, readonly) BOOL isHidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 syncState:(id)a1 syncStatistics:(id)a2;

@end
