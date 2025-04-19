@interface ACManagedDefaults : NSObject

+ (id)sharedInstance;

- (void)setValue:(id)a0 forManagedDefault:(id)a1;
- (id)valueForManagedDefault:(id)a0;

@end
