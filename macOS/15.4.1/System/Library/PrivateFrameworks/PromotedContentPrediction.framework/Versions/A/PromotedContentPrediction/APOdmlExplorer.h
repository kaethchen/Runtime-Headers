@class NSNumber, NSMutableArray, NSString;

@interface APOdmlExplorer : NSObject

@property (retain, nonatomic) NSMutableArray *sortableObjects;
@property (readonly, nonatomic) NSNumber *epsilon;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSString *noise_type;
@property (readonly, nonatomic) NSNumber *clipping_bound;

- (void).cxx_destruct;

@end
