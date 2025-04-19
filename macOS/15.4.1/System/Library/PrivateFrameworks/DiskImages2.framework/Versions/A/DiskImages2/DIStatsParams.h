@class NSUUID;

@interface DIStatsParams : DIBaseParams

@property (readonly, copy, nonatomic) NSUUID *statInstanceID;
@property (readonly, copy, nonatomic) NSUUID *instanceID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statsWithError:(id *)a0;
- (id)initWithURL:(id)a0 instanceId:(id)a1 error:(id *)a2;

@end
