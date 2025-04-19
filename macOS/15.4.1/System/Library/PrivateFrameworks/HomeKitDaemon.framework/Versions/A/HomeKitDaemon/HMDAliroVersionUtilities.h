@interface HMDAliroVersionUtilities : NSObject

+ (id)concatenate:(id)a0;
+ (id)chunks:(id)a0;
+ (id)dataFromNumber:(id)a0 error:(id *)a1;
+ (BOOL)isCurrentDeviceCompatibleWithAliroVersion:(id)a0;
+ (void)readAliroVersionIntoMemoryOnHomeManager:(id)a0;
+ (void)readAndSaveAliroVersionFromSESOnHomeManager:(id)a0 completionHandler:(void (^)(void))a1;

- (id)init;

@end
