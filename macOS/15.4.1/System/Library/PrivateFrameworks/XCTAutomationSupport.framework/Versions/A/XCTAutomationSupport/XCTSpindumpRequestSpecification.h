@class NSString;

@interface XCTSpindumpRequestSpecification : NSObject <NSSecureCoding>

@property (class, readonly) unsigned long long defaultDurationInMilliseconds;
@property (class, readonly) unsigned long long defaultIntervalInMicroseconds;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int processID;
@property (readonly) unsigned long long durationMilliseconds;
@property (readonly) unsigned long long intervalMicroseconds;
@property (readonly) unsigned long long spindumpFlags;
@property (readonly) NSString *reason;
@property (readonly) NSString *signature;
@property (readonly) NSString *filename;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcessID:(int)a0;
- (id)initWithProcessID:(int)a0 durationMilliseconds:(unsigned long long)a1 intervalMicroseconds:(unsigned long long)a2 spindumpFlags:(unsigned long long)a3 reason:(id)a4 signature:(id)a5 filename:(id)a6;

@end
