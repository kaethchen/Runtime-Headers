@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSNumber *desiredPurgeAmount;
@property (nonatomic) BOOL offloadOnly;
@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) BOOL skipLaunchCheck;
@property (nonatomic) long long urgency;
@property (copy, nonatomic) NSString *volume;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0 urgency:(long long)a1;

@end
