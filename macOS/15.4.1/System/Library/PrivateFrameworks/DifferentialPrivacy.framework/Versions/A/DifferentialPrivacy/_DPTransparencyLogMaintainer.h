@class NSString;

@interface _DPTransparencyLogMaintainer : NSObject <_DPMaintenance>

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (double)lifetimeOfFile:(id)a0;
+ (BOOL)checkAndRemoveFile:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0;
- (BOOL)doMaintenance;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
