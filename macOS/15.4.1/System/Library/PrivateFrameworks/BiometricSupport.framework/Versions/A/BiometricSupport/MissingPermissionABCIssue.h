@interface MissingPermissionABCIssue : EntitlementABCIssue

@property (nonatomic) int permission;

+ (void)reportPermission:(int)a0 client:(id)a1 processName:(id)a2 forReporter:(id)a3;

- (id)context;
- (id)tag;
- (unsigned long long)abcReason;
- (id)initWithPermission:(int)a0 client:(id)a1 processName:(id)a2 forReporter:(id)a3;

@end
