@class NSArray, NSUUID, NSString, DNDModeConfiguration, NSDate;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_activeModeAssertionMetadata;
    NSString *_overrideModeIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL willSuppressInterruptions;
@property (readonly, copy) NSArray *activeModeAssertionMetadata;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly) unsigned long long suppressionState;
@property (readonly, copy) NSArray *activeModeIdentifiers;
@property (readonly, copy) NSString *activeModeIdentifier;
@property (readonly, copy) DNDModeConfiguration *activeModeConfiguration;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *userVisibleTransitionDate;
@property (readonly) unsigned long long userVisibleTransitionLifetimeType;
@property (readonly, getter=isActive) BOOL active;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activeModeAssertionMetadata;
- (id)activeModeIdentifier;
- (id)activeModeIdentifiers;
- (id)activeModeUUID;
- (id)initWithSuppressionState:(unsigned long long)a0 activeModeAssertionMetadata:(id)a1 startDate:(id)a2 userVisibleTransitionDate:(id)a3 userVisibleTransitionLifetimeType:(unsigned long long)a4 activeModeConfiguration:(id)a5;
- (void)setOverrideModeIdentifier:(id)a0;
- (BOOL)willSuppressInterruptions;

@end
