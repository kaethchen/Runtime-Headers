@class NSString;

@interface HMMMLogOrigin : NSObject

@property (readonly, nonatomic) NSString *logId;

+ (id)logCategory;
+ (id)originWithLogIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithLogIdentifier:(id)a0;

@end
