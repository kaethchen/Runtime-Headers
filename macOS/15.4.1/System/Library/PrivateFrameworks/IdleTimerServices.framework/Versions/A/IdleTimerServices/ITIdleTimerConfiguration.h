@class NSString;

@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding>

@property (readonly, copy, nonatomic, getter=_identifier) NSString *identifier;
@property (nonatomic, getter=_idleEventMask, setter=_setIdleEventMask:) unsigned long long idleEventMask;
@property (copy, nonatomic, getter=_idleEventHandlerBlock, setter=_setIdleEventHandlerBlock:) id /* block */ idleEventHandlerBlock;
@property (nonatomic) BOOL disablesTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)configurationToDisableIdleTimer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_uniquedReason:(id)a0;
- (id)_copyWithNewIdentifier;

@end
