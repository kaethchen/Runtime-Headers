@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSDictionary *titlesAndParticipants;
@property (readonly, nonatomic) double earliestStartTime;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) unsigned long long eventHasAlarmCount;

+ (id)eventMetadataWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 eventCount:(unsigned long long)a2 eventHasAlarmCount:(unsigned long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithReplacementEarliestStartTime:(double)a0;
- (id)copyWithReplacementEventCount:(unsigned long long)a0;
- (id)copyWithReplacementEventHasAlarmCount:(unsigned long long)a0;
- (id)copyWithReplacementTitlesAndParticipants:(id)a0;
- (id)initWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 eventCount:(unsigned long long)a2 eventHasAlarmCount:(unsigned long long)a3;
- (BOOL)isEqualToEventMetadata:(id)a0;

@end
