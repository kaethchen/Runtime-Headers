@interface MSExternalAction : NSObject

@property BOOL remote;
@property long long sequenceNumber;

+ (id)entityName;

- (id)init;
- (id)initWithManagedObject:(id)a0;
- (void)_msExternalActionCommonInitWithSequenceNumber:(long long)a0;
- (id)managedObjectForContext:(id)a0;

@end
