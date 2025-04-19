@class NSString;

@interface JLArchitecture : NSObject

@property (nonatomic) int cpuType;
@property (nonatomic) int cpuSubtype;
@property (copy, nonatomic) NSString *archString;
@property (readonly, nonatomic) BOOL executableOnHost;

+ (id)archWithArchString:(id)a0 error:(id *)a1;
+ (id)archWithCPUType:(int)a0 CPUSubtype:(int)a1;
+ (id)archsForExecutable:(id)a0 error:(id *)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)initWithArchString:(id)a0 CPUType:(int)a1 CPUSubtype:(int)a2;

@end
