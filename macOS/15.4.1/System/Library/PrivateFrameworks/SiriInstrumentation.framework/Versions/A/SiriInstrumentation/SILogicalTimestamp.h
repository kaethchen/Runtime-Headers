@class NSUUID, SILogicalTimestampInternal;

@interface SILogicalTimestamp : NSObject {
    SILogicalTimestampInternal *_underlying;
}

@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) unsigned long long nanoSecondsSinceBoot;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)underlying;
- (id)initWithClockIdentifier:(id)a0 nanosecondsSinceBoot:(unsigned long long)a1;
- (id)initWithInternalType:(id)a0;

@end
