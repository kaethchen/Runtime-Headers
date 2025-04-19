@interface PPHealthKitImporter : NSObject

+ (id)defaultInstance;

- (id)init;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)a0;

@end
