@class NSArray;

@interface DAEventDevicesPresent : DAEvent

@property (copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) BOOL devicesPresent;
@property (readonly, nonatomic) BOOL devicesMigrated;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithMigration:(BOOL)a0;
- (id)initWithPresent:(BOOL)a0;
- (id)initWithPresent:(BOOL)a0 devicesMigrated:(BOOL)a1;

@end
