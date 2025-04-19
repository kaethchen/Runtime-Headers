@interface INManagedDefaults : NSObject

+ (id)sharedInstance;

- (void)setValue:(id)a0 forManagedDefault:(id)a1;
- (id)valueForManagedDefault:(id)a0;
- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)a0;

@end
