@class NSString, NSMutableArray;

@interface FeatureHash : NSObject

@property (retain) NSMutableArray *values;
@property (retain) NSString *hashID;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0;

@end
