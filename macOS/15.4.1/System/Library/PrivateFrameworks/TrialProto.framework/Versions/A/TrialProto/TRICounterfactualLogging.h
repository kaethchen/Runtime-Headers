@interface TRICounterfactualLogging : TRIPBMessage

@property (nonatomic) int version;
@property (nonatomic) BOOL hasVersion;

+ (id)descriptor;

@end
