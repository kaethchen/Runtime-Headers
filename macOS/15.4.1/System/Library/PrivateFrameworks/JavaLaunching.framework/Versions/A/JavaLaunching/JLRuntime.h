@class NSArray, NSString;

@interface JLRuntime : NSObject

@property (class, readonly, copy, nonatomic) NSArray *allRuntimes;
@property (class, readonly, copy, nonatomic) NSArray *supportedRuntimes;
@property (class, readonly, copy, nonatomic) NSArray *filteredRuntimes;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *vendor;
@property (copy, nonatomic) NSString *platformVersion;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } minSystemVersion;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } maxSystemVersion;
@property (copy, nonatomic) NSArray *archs;
@property (copy, nonatomic) NSString *javaHome;

+ (id)runtimeWithJVMBundlePath:(id)a0 error:(id *)a1;
+ (id)preferredRuntimeForTool:(id)a0 fallbackOnSupported:(BOOL)a1 error:(id *)a2;
+ (id)runtimeWithJavaHome:(id)a0 error:(id *)a1;
+ (id)runtimeWithPluginBundlePath:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1 javaHome:(id)a2 vendor:(id)a3 platformVersion:(id)a4 version:(id)a5 minSystemVersionString:(id)a6 maxSystemVersionString:(id)a7 error:(id *)a8;
- (long long)reverseOrderByVersion:(id)a0;
- (int)spawnTool:(id)a0 arguments:(id)a1 setExec:(BOOL)a2 error:(id *)a3;
- (BOOL)supportsTool:(id)a0;

@end
