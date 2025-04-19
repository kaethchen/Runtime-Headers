@class NSDate;

@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long recordingSource;
@property (readonly) NSDate *sessionStartDate;
@property (readonly) double sessionDuration;
@property (readonly) double signatureRecordingOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionStartDate:(id)a0 signatureRecordingOffset:(double)a1;

@end
