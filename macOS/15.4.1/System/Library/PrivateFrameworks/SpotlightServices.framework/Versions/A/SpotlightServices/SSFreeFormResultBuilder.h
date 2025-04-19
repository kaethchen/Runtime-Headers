@class NSString;

@interface SSFreeFormResultBuilder : SSResultBuilder

@property (retain) NSString *freeFormDescription;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;

@end
