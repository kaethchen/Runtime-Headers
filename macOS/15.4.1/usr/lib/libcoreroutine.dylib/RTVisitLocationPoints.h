@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)duration;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)firstDate;
- (id)initWithLocations:(id)a0;
- (id)lastDate;

@end
