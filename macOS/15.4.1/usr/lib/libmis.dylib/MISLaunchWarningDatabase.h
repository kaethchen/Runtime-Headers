@interface MISLaunchWarningDatabase : NSObject

- (id)queryForBundle:(id)a0 withError:(id *)a1;
- (id)queryForExecutableURL:(id)a0 withError:(id *)a1;
- (BOOL)setUserOverride:(BOOL)a0 forBundle:(id)a1 withError:(id *)a2;

@end
