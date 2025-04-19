@class NSString, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemTarget;
+ (id)systemTargetWithDeferringToken:(id)a0;
+ (id)focusTargetForPID:(int)a0;
+ (id)keyboardFocusTarget;
+ (id)keyboardFocusTargetWithDeferringToken:(id)a0;
+ (id)targetForDeferringEnvironment:(id)a0;
+ (id)targetForDeferringEnvironment:(id)a0 deferringToken:(id)a1;
+ (id)targetForPID:(int)a0 environment:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithEnvironment:(id)a0 token:(id)a1 pid:(int)a2;

@end
