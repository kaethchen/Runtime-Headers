@class NSUUID, KTStatusResult;

@interface TUIKTStateManager : NSObject {
    KTStatusResult *_ktStatusResult;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long optIn;
@property (readonly, nonatomic) unsigned long long recentFailedEventIdsCount;
@property (readonly, nonatomic) NSUUID *firstRecentFailedEventId;
@property (readonly, nonatomic) long long expectedResolutionDays;
@property (nonatomic) BOOL isVerifyCDPRunning;

- (id)init;
- (void).cxx_destruct;
- (id)stateDescription;
- (id)stateLabel;
- (BOOL)isCDPErrorState;
- (BOOL)isErrorState;
- (void)isManateeAvailableWithCompletion:(id /* block */)a0;
- (void)setExpectedResolutionDays:(id)a0;
- (BOOL)shouldMaybeUpdateMonitor;
- (void)updateStateWithKTStatusResult:(id)a0;

@end
