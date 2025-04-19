@class NSDate;

@interface GKContactsIntegrationIDSUpdateIntervalState : GKInternalRepresentation

@property (readonly, nonatomic) unsigned long long updateIntervalHandleCount;
@property (readonly, nonatomic) NSDate *updateIntervalStartTime;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initUpdateIntervalHandleCount:(unsigned long long)a0 updateIntervalStartTime:(id)a1;

@end
