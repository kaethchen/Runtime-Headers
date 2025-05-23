@class TISKSessionStats;

@interface TISKBucketSwitchEvent : TISKEvent

@property (retain, nonatomic) TISKSessionStats *sessionStats;

- (id)description;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (void)reportToSession:(id)a0;

@end
