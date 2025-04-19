@class NSString, DNDContactHandle, DNDClientEventBehavior;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL notifyAnyway;
@property (readonly) unsigned long long behavior;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *subtitle;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) unsigned long long platform;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long urgency;
@property (readonly, copy) DNDContactHandle *sender;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *filterCriteria;
@property (readonly, copy, nonatomic) DNDClientEventBehavior *forwardingBehavior;
@property (readonly) BOOL shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)_initWithDetails:(id)a0;
- (id)_initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 platform:(unsigned long long)a2 type:(unsigned long long)a3 urgency:(unsigned long long)a4 sender:(id)a5 threadIdentifier:(id)a6 filterCriteria:(id)a7 notifyAnyway:(BOOL)a8 behavior:(unsigned long long)a9 forwardingBehavior:(id)a10 title:(id)a11 subtitle:(id)a12 body:(id)a13;
- (BOOL)shouldAlwaysInterrupt;

@end
