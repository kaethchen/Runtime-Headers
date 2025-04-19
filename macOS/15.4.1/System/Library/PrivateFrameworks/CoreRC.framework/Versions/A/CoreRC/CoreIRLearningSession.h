@class CoreIRDevice;
@protocol CoreIRLearningSessionBridgeDelegate, CoreIRLearningSessionDelegate;

@interface CoreIRLearningSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) CoreIRDevice *owningDevice;
@property (nonatomic) id<CoreIRLearningSessionBridgeDelegate> bridgeDelegate;
@property (readonly, nonatomic) unsigned long long reason;
@property (nonatomic) id<CoreIRLearningSessionDelegate> delegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReason:(unsigned long long)a0;
- (void)endLearning;
- (void)enumerateMappingUsingBlock:(id /* block */)a0;
- (BOOL)startLearningCommand:(unsigned long long)a0;

@end
