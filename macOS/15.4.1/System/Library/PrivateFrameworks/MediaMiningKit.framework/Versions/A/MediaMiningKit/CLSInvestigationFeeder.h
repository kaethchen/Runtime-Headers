@class NSSet, NSString, NSMutableSet, NSDate;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>

@property (readonly, nonatomic) NSMutableSet *focusItems;
@property (retain, nonatomic) NSSet *focusPersonLocalIdentifiers;
@property (nonatomic) unsigned long long locationClusteringAlgorithm;
@property (nonatomic) BOOL allowsInterview;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (double)behavioralScore;
- (id)approximateLocation;
- (id)sharedItems;
- (void)_enumerateLocationClustersWithGaussians:(id)a0 enumerationBlock:(id /* block */)a1;
- (id)_prepareFeederWithServiceManager:(id)a0 locationCache:(id)a1 progressBlock:(id /* block */)a2;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonNames:(id)a0 withGaussiansUsingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)locationClustersWithProgressBlock:(id /* block */)a0;
- (unsigned long long)numberOfItemsInInvestigation:(id)a0;
- (unsigned long long)numberOfRegularGemItems;
- (unsigned long long)numberOfShinyGemItems;
- (id)prepareWithServiceManager:(id)a0 locationCache:(id)a1 progressBlock:(id /* block */)a2;
- (id)privateItems;

@end
