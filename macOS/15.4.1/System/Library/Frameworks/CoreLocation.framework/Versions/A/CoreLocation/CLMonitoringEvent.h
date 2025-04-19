@class NSString, CLCondition, NSDate;

@interface CLMonitoringEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long diagnosticMask;
@property (readonly) NSString *identifier;
@property (readonly) CLCondition *refinement;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) NSDate *date;
@property (readonly, nonatomic) BOOL authorizationDenied;
@property (readonly, nonatomic) BOOL authorizationDeniedGlobally;
@property (readonly, nonatomic) BOOL authorizationRestricted;
@property (readonly, nonatomic) BOOL insufficientlyInUse;
@property (readonly, nonatomic) BOOL accuracyLimited;
@property (readonly, nonatomic) BOOL conditionUnsupported;
@property (readonly, nonatomic) BOOL conditionLimitExceeded;
@property (readonly, nonatomic) BOOL persistenceUnavailable;
@property (readonly, nonatomic) BOOL serviceSessionRequired;
@property (readonly, nonatomic) BOOL authorizationRequestInProgress;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setState:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 refinement:(id)a1 state:(unsigned long long)a2 date:(id)a3 diagnostics:(unsigned long long)a4;
- (void)updateDiagnosticMask:(unsigned long long)a0;
- (void)updateMonitoringState:(unsigned long long)a0;

@end
