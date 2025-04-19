@class MXCallStackTree, NSMeasurement;

@interface MXAppLaunchDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *launchDuration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 launchDuration:(id)a3;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 pid:(int)a3 callStack:(id)a4 launchDuration:(id)a5;

@end
