@class NSString, WiFiUsageBssDetails, NSDate;

@interface WiFiUsageWatchdogDetails : NSObject

@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WiFiUsageBssDetails *connectedBss;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) int unavailableReason;
@property (nonatomic) int unavailableSubreason;
@property (retain, nonatomic) NSString *unavailableReasonString;
@property (nonatomic) int availableReason;
@property (nonatomic) int availableSubreason;
@property (retain, nonatomic) NSString *availableReasonString;

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0 andConnectedBss:(id)a1;
- (int)reportedReason;
- (id)reportedReasonString;
- (int)reportedSubreason;
- (id)reportedSubreasonString;

@end
