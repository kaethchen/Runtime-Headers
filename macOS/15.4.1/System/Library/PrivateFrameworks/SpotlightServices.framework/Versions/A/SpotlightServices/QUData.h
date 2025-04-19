@class NSString, NSSet;

@interface QUData : NSObject

@property (readonly, nonatomic) NSString *intentLabel;
@property (readonly, nonatomic) float intentScore;
@property (readonly, nonatomic) NSSet *intentBundleIds;

- (void).cxx_destruct;
- (id)initWithQueryContext:(id)a0;

@end
