@class NSError, NSString, NSDictionary;

@interface SFRepairResultMetrics : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isPreflightError;
@property (nonatomic) unsigned long long problemFlags;
@property (nonatomic) unsigned long long peerProblemFlags;
@property (retain, nonatomic) NSString *peerModel;
@property (retain, nonatomic) NSString *peerBuild;
@property (nonatomic) BOOL forceWiFi;
@property (nonatomic) BOOL hasView;
@property (nonatomic) double totalMs;
@property (nonatomic) double triggerMs;
@property (readonly, nonatomic) NSDictionary *dict;

- (void).cxx_destruct;
- (long long)resultType;

@end
