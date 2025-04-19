@class NSDateInterval;

@interface BPSSessionWindowState : BPSWindowState

@property (retain, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadata;
- (id)initWithDateInterval:(id)a0 identifier:(id)a1 aggregate:(id)a2 completed:(BOOL)a3;

@end
