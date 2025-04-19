@class NSString;

@interface CSFMil2bnnsCompilationConfig : NSObject

@property (readonly, nonatomic) NSString *funcName;
@property (readonly, nonatomic) BOOL singleThread;
@property (readonly, nonatomic) BOOL debugInfo;
@property (readonly, nonatomic) unsigned long long predefinedOptimizations;
@property (readonly, nonatomic) BOOL optimizeForSize;

- (void).cxx_destruct;
- (id)initWithConfigPath:(id)a0 errOut:(id *)a1;

@end
