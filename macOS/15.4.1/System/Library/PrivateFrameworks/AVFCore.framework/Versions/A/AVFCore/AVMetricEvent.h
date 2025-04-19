@class NSString, NSDate;

@interface AVMetricEvent : NSObject <NSSecureCoding> {
    NSDate *_date;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _mediaTime;
    NSString *_sessionID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *date;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } mediaTime;
@property (readonly) NSString *sessionID;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionForAttr;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2;

@end
