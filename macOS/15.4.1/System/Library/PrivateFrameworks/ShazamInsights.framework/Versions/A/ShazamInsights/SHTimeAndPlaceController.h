@protocol SHDataFetcher;

@interface SHTimeAndPlaceController : NSObject

@property (readonly) id<SHDataFetcher> dataFetcher;

- (void).cxx_destruct;
- (void)affinityGroupsFromData:(id)a0 atLocation:(id)a1 onDate:(id)a2 configuration:(id)a3 completionHandler:(id /* block */)a4;

@end
