@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *state;
@property (retain) NSDate *timestamp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 timestamp:(id)a1;

@end
