@interface FCBiomeSignalProvider : NSObject <FCBiomeSignalProviderType>

+ (void)fetchSignalsFromBiomeWithSafariBlockoutDuration:(double)a0 maxExternalSignalEventCount:(long long)a1 resultsBlock:(id /* block */)a2;

@end
