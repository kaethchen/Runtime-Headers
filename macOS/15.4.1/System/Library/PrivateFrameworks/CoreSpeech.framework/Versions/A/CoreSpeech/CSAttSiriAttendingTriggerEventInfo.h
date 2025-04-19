@class CSAttSiriRequestContext, NSString;

@interface CSAttSiriAttendingTriggerEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CSAttSiriRequestContext *ctx;
@property (retain, nonatomic) NSString *detectedToken;
@property (nonatomic) unsigned long long triggerMachTime;
@property (nonatomic) unsigned long long triggerAbsStartSampleId;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
