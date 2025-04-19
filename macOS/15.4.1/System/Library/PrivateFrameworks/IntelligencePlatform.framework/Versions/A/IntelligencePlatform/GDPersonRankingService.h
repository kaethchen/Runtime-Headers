@class _TtC20IntelligencePlatform20PersonRankingService;

@interface GDPersonRankingService : NSObject {
    _TtC20IntelligencePlatform20PersonRankingService *_innerService;
}

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)rankedPersonsWithMaxCount:(long long)a0 error:(id *)a1;

@end
