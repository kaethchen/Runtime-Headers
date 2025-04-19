@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (id)init;
- (void).cxx_destruct;
- (void)addDestination:(id)a0;
- (id)_destinationClassMap;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)removeDestination:(id)a0;
- (void)removePhotoLibraryFromDestinations;
- (void)sendToAllDestinations:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)updateWithConfiguration:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;

@end
