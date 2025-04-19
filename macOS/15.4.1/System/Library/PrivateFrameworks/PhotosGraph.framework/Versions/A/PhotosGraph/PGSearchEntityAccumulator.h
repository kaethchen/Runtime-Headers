@class NSDictionary, PGGraphSearchEntity;

@interface PGSearchEntityAccumulator : NSObject <PGSearchEntityProvider> {
    void /* unknown type, empty encoding */ internalSearchEntitiesByMomentUUID;
    void /* unknown type, empty encoding */ internalMePersonEntity;
    void /* unknown type, empty encoding */ internalRelatedPersonAndPetDescriptorByPersonIdentifier;
    void /* unknown type, empty encoding */ synonymsByCategoryMask;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ graphSearchEntityDonationEnabled;
}

@property (nonatomic, readonly) NSDictionary *searchEntitiesByMomentUUID;
@property (nonatomic, readonly) NSDictionary *relatedPersonAndPetDescriptorByRelatedPersonIdentifier;
@property (nonatomic, readonly) PGGraphSearchEntity *mePersonEntity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSynonymsByCategoryMask:(id)a0;
- (BOOL)accumulateHolidays:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (BOOL)accumulateHomeAndWorkWithHomeAndWorkKeywords:(id)a0 forMomentUUID:(id)a1 dateInterval:(id)a2 error:(id *)a3;
- (BOOL)accumulateMeanings:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (BOOL)accumulatePersonAndPetRelationshipsFromGraph:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)accumulatePublicEventsInPublicEventKeywords:(id)a0 forMomentUUID:(id)a1 dateInterval:(id)a2 error:(id *)a3;
- (BOOL)accumulateSeasons:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (BOOL)accumulateTrip:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;

@end
