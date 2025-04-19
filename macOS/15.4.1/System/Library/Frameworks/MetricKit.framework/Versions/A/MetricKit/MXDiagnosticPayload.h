@class NSArray, NSDate;

@interface MXDiagnosticPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *cpuExceptionDiagnostics;
@property (readonly) NSArray *diskWriteExceptionDiagnostics;
@property (readonly) NSArray *hangDiagnostics;
@property (readonly) NSArray *appLaunchDiagnostics;
@property (readonly) NSArray *crashDiagnostics;
@property (readonly) NSDate *timeStampBegin;
@property (readonly) NSDate *timeStampEnd;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithTimeStampBegin:(id)a0 withTimeStampEnd:(id)a1 withDiagnostics:(id)a2;

@end
