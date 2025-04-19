@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedName:(const char *)a0;
- (id)initWithMuninRoadEdge:(const void *)a0 localize:(BOOL)a1;

@end
