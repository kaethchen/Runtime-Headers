@class CLClientKeyPath, NSString, CLClientManagerAuthorizationContext;
@protocol CLIntersiloUniverse;

@interface CLCondition : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLClientKeyPath *ckp;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) NSString *monitoredIdentifier;
@property (retain, nonatomic) CLClientManagerAuthorizationContext *authorizationContext;
@property (copy, nonatomic) id /* block */ onConditionUpdateCallbackHandler;
@property (nonatomic) id<CLIntersiloUniverse> universe;
@property (retain, nonatomic) CLCondition *refinement;
@property (nonatomic) unsigned long long lastMonitoringState;
@property (nonatomic) BOOL isMonitoring;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)initCondition;
- (BOOL)isAuthorized;
- (void)setCallbackHandler:(id /* block */)a0;

@end
