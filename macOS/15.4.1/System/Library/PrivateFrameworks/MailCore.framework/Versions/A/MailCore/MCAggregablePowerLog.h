@class NSString, NSMutableDictionary, _MCBatchingTimer, NSLock;

@interface MCAggregablePowerLog : MCPowerLog <_MCBatchingTimerDelegate> {
    NSLock *_aggregationLock;
    NSMutableDictionary *_aggregatedEventDictionary;
    _MCBatchingTimer *_timer;
}

@property (readonly, copy, nonatomic) id /* block */ aggregationBlock;
@property (readonly, nonatomic) double aggregationPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
