@class NSString;
@protocol ECSLGestureEventAuthenticationMessage, ECVersionedPID, ECEventType, ECSLKeyEventAuthenticationMessage, ECSLMouseEventAuthenticationMessage;

@interface SLSSkyLightGestureEventAuthenticationMessage : SLSSkyLightEventAuthenticationMessage <ECSLGestureEventAuthenticationMessage>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int gestureHidType;
@property (readonly, nonatomic) unsigned char gesturePhase;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int connection;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly, nonatomic) unsigned int window;
@property (readonly, nonatomic) id<ECSLMouseEventAuthenticationMessage> mouse;
@property (readonly, nonatomic) id<ECSLKeyEventAuthenticationMessage> key;
@property (readonly, nonatomic) id<ECSLGestureEventAuthenticationMessage> gesture;
@property (readonly, nonatomic) id<ECVersionedPID> proxyTargetProcess;
@property (readonly, nonatomic) id<ECEventType> eventType;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long originIdentifier;
@property (readonly, nonatomic) id<ECVersionedPID> targetProcess;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)addToSigningContext:(id)a0;
- (id)initWithMessageInitData:(struct MessageInitData { void /* function */ **x0; } *)a0;
- (BOOL)isSuperclassEquivalent:(id)a0;
- (BOOL)matchesMessageData:(id)a0;

@end
