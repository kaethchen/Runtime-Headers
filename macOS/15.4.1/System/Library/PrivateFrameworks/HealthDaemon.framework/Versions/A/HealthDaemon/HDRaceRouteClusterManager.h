@class HDProfile;

@interface HDRaceRouteClusterManager : NSObject {
    HDProfile *_profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (BOOL)generateRaceRouteClustersWithLimit:(unsigned long long)a0 error:(id *)a1;
- (id)raceRouteClustersForActivityType:(unsigned long long)a0 error:(id *)a1;

@end
