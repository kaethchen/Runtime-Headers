@class NSString;

@interface _SFAnalysisOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *aneContext;
@property (readonly, copy, nonatomic) NSString *cpuContext;
@property (readonly, copy, nonatomic) NSString *gpuContext;
@property (readonly, nonatomic) BOOL keepANEModelLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPriority:(long long)a0 aneContext:(id)a1 cpuContext:(id)a2 gpuContext:(id)a3 keepANEModelLoaded:(BOOL)a4;

@end
