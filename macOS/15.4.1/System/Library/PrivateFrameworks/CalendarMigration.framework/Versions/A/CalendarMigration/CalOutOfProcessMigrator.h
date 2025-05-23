@class NSString;

@interface CalOutOfProcessMigrator : NSObject <CalOutOfProcessMigrator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)performMigrationIfNeeded;
+ (BOOL)performReminderTruthFileMigrationIfNeeded;


@end
