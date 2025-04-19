@interface NFLocalAccount : NFAccount

@property (nonatomic) BOOL migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (BOOL)updateAvailability;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
