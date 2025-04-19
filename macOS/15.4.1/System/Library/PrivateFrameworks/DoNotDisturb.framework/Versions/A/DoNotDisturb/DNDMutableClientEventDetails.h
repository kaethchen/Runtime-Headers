@class NSString, DNDContactHandle, DNDClientEventBehavior;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property BOOL notifyAnyway;
@property unsigned long long behavior;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSString *body;
@property (copy) NSString *identifier;
@property (copy) NSString *bundleIdentifier;
@property unsigned long long platform;
@property unsigned long long type;
@property unsigned long long urgency;
@property (copy) DNDContactHandle *sender;
@property (copy) NSString *threadIdentifier;
@property (copy) NSString *filterCriteria;
@property (copy, nonatomic) DNDClientEventBehavior *forwardingBehavior;
@property BOOL shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(unsigned long long)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setBehavior:(unsigned long long)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setUrgency:(unsigned long long)a0;
- (void)setSender:(id)a0;
- (void)setBody:(id)a0;
- (void)setFilterCriteria:(id)a0;
- (void)setForwardingBehavior:(id)a0;
- (void)setNotifyAnyway:(BOOL)a0;
- (void)setShouldAlwaysInterrupt:(BOOL)a0;

@end
