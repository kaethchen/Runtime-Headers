@interface AppAttestTaskCreator : NSObject

+ (id)create;
+ (void)setupObserverFor:(id)a0 repeatingSystemTask:(id)a1;
+ (id)createForDefaultAttest;
+ (id)createForDeviceAttestKeychain;
+ (id)createForWebAuthAttestKeychain;

@end
