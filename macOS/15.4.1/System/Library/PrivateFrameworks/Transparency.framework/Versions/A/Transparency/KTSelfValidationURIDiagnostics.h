@class NSString, NSDictionary, NSError, NSDate;

@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson;
@property (retain) NSDictionary *transparentDataDiagnosticsJson;
@property (retain) NSString *result;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *error;
@property (retain) NSDate *requestTime;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
