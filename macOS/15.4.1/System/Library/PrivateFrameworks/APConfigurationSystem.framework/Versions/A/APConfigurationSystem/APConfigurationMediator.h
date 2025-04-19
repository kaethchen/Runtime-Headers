@class NSString;

@interface APConfigurationMediator : NSObject

@property (class, readonly, nonatomic) NSString *configSystemDirectoryPath;
@property (class, readonly, nonatomic) NSString *resourcesBundleDirectoryPath;

+ (id)configurationForClass:(Class)a0;
+ (id)configurationForClass:(Class)a0 usingCache:(BOOL)a1;
+ (id)_configSystemErrorWithDescription:(id)a0;
+ (id)_loadFromDefaultsForClass:(Class)a0 error:(id *)a1;
+ (id)_loadFromJSONForClass:(Class)a0 error:(id *)a1;
+ (void)_removeFileAtPath:(id)a0;
+ (id)_resourcesBundleDirectoryPathError:(id *)a0;

@end
