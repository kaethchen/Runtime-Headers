@class NSString, TIRevisionRateAnalyzer;

@interface TICoreAnalyticsEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver>

@property (retain, nonatomic) TIRevisionRateAnalyzer *revisionRateAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;

@end
