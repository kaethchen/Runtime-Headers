@class NSUUID;

@interface SILogicalTimestampInternal : NSObject {
    void /* unknown type, empty encoding */ clockIdentifier;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ nanosecondsSinceBoot;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(id)a0 nanosecondsSinceBoot:(unsigned long long)a1;

@end
