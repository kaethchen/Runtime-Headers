@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringChainObserverPredicate : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringEnvironment *_environment;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;

+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
