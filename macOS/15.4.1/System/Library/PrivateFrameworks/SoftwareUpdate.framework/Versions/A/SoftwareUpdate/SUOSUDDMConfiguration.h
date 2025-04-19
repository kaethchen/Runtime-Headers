@class SUCorePolicyDDMConfiguration;

@interface SUOSUDDMConfiguration : NSObject

@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
