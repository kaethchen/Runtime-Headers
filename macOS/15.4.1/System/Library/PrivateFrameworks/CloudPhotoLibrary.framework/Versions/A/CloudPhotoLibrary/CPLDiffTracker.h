@class NSMutableSet;

@interface CPLDiffTracker : NSObject

@property (nonatomic) BOOL shouldCompareAllProperties;
@property (readonly, nonatomic) BOOL objectsAreTotallyDifferent;
@property (readonly, nonatomic) NSMutableSet *differingProperties;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)areObjectsDifferentOnProperty:(id)a0;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)a0;

@end
