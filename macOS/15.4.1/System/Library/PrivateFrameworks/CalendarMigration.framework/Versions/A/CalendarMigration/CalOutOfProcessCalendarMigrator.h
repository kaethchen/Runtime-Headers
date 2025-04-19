@class NSURL, NSString;

@interface CalOutOfProcessCalendarMigrator : NSObject <CalMigrator>

@property (readonly, nonatomic) NSURL *urlForTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_invokeTool;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;
- (id)initWithBundleContainingTool:(id)a0;
- (id)initWithURLForTool:(id)a0;

@end
