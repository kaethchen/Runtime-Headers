@class NSArray;

@interface PLDataCluster : NSObject

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) double diameter;
@property (retain, nonatomic) id clustroid;
@property (nonatomic) double score;

+ (id)clusterWithObjects:(id)a0;
+ (id)clusterWithObjects:(id)a0 clustroid:(id)a1 diameter:(double)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)locations;
- (id)approximateRegionWithMaximumRadius:(double)a0;
- (id)meanRegion:(double)a0;
- (id)meanUniversalDate;
- (id)universalDates;

@end
