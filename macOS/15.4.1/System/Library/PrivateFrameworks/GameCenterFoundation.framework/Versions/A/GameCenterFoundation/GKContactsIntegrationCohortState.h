@interface GKContactsIntegrationCohortState : GKInternalRepresentation

@property (readonly, nonatomic) unsigned long long cohortNoneCount;
@property (readonly, nonatomic) unsigned long long cohortNotSetCount;
@property (readonly, nonatomic) unsigned long long cohortOptedInCount;
@property (readonly, nonatomic) unsigned long long cohortOptedOutCount;
@property (readonly, nonatomic) unsigned long long cohortUnknownCount;
@property (readonly, nonatomic) double percentSyncedAtleastOnce;

+ (id)secureCodedPropertyKeys;

- (id)initCohortNoneCount:(unsigned long long)a0 cohortNotSetCount:(unsigned long long)a1 cohortOptedInCount:(unsigned long long)a2 cohortOptedOutCount:(unsigned long long)a3 cohortUnknownCount:(unsigned long long)a4 percentSyncedAtleastOnce:(double)a5;

@end
