@interface DEDDirectoriesCleanup : NSObject

+ (void)run;
+ (BOOL)isDryRun;
+ (BOOL)shouldRun;
+ (void)didRun;

@end
