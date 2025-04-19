@class NSArray, NSString, NSMutableArray, NSPersistentContainer;

@interface NeighborGraph : NSObject

@property (retain, nonatomic) NSArray *bssids;
@property (retain, nonatomic) NSMutableArray *graph;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSMutableArray *bssidsDwellTimes;
@property (retain, nonatomic) NSString *ssid;

- (void).cxx_destruct;
- (void)setNeighborsForBssid:(id)a0 neighbors:(id)a1;
- (id)copyNeighborGraphAsDictionaryOnMoc:(id)a0;
- (BOOL)doesPathExist:(id)a0 target:(id)a1;
- (unsigned long long)graphDensity;
- (id)initWithBssidArray:(id)a0 ssid:(id)a1 persistentContainer:(id)a2;
- (void)setNeighborsForBssid:(id)a0 dwellTime:(unsigned long long)a1 neighborInfoArray:(id)a2;

@end
