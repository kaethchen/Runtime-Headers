@class MXHangDiagnostic, MXAppLaunchDiagnostic;

@interface MXHangTracerData : MXSourceData

@property (retain) MXHangDiagnostic *hangDiagnostic;
@property (retain) MXAppLaunchDiagnostic *appLaunchDiagnostic;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end
