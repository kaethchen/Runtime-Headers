@class NSArray, NSString;

@interface CalAggregateMigrationController : NSObject <CalMigrationController>

@property (readonly, nonatomic) NSArray *controllers;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithControllers:(id)a0;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;

@end
