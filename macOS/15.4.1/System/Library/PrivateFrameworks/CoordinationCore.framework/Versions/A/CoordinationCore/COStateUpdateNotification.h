@class NSDictionary;

@interface COStateUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSDictionary *updates;
@property (readonly, copy, nonatomic) NSDictionary *removals;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUpdates:(id)a0 removals:(id)a1;

@end
