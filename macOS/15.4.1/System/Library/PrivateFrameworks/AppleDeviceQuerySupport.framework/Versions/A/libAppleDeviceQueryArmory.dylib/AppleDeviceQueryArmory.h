@class AppleDeviceQueryArmoryHelperArmory, NSString, NSDictionary, NSMutableArray;

@interface AppleDeviceQueryArmory : AppleDeviceQuerySingletonArmory

@property (readonly) Class configClass;
@property (readonly) Class actionClass;
@property (readonly) NSString *key;
@property (readonly) NSDictionary *option;
@property (readonly) NSDictionary *config;
@property (retain) NSMutableArray *dependencyPath;
@property (readonly) AppleDeviceQueryArmoryHelperArmory *helper;

- (void).cxx_destruct;
- (void)initData;
- (id)queryKey:(id)a0 andOptions:(id)a1 andPreferences:(id)a2 withError:(id *)a3;
- (id)actForKey:(id)a0 andName:(id)a1 andConfig:(id)a2 andOptions:(id)a3 andPreferences:(id)a4 withError:(id *)a5;
- (BOOL)checkDependency:(id)a0 withError:(id *)a1;
- (BOOL)convertReturnValue:(id *)a0 ByItselfAndError:(id)a1 AndRevalues:(id)a2;
- (id)convertReturnValue:(id)a0 toCase:(id)a1;
- (id)convertReturnValue:(id)a0 toFormat:(id)a1;
- (id)getKeyAndOptionFromDependency:(id)a0 withError:(id *)a1;
- (id)runForKey:(id)a0 andOptions:(id)a1 andPreferences:(id)a2 withError:(id *)a3;
- (BOOL)updateChangeablePropertiesForKey:(id)a0 andOption:(id)a1 withError:(id *)a2;
- (BOOL)verifyDependencyWithError:(id *)a0;

@end
