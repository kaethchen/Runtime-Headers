@class NSData;

@interface GTReplayUpdateAccelerationStructureSession : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionsID;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
