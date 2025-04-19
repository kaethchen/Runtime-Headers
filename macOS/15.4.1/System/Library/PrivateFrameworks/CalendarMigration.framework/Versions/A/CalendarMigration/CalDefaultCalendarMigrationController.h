@class NSString;
@protocol CalCalendarMigrationDefaultsProvider;

@interface CalDefaultCalendarMigrationController : NSObject <CalMigrationController>

@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> defaultsProvider;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefaultsProvider:(id)a0;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;

@end
