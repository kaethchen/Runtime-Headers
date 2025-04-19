@class BKSHIDEventDispatchingTarget, NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringResolution : NSObject <BSDescriptionStreaming, NSMutableCopying, NSSecureCoding, BKSHIDEventBaseAttributeSubsetProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) BOOL isBuffer;
@property (readonly, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (readonly, copy, nonatomic) NSString *processDescription;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)modifiedResolution:(id /* block */)a0;

@end
