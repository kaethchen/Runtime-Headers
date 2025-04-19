@interface NSNull : NSObject <CAAction, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)scriptingMissingValueWithDescriptor:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)null;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)_scriptingCount;
- (BOOL)_scriptingCanHandleCommand:(id)a0;
- (unsigned long long)_scriptingCountOfValueForKey:(id)a0;
- (BOOL)_scriptingExists;
- (BOOL)_scriptingMightHandleCommand:(id)a0;
- (id)_scriptingNullDescriptor;
- (void)_scriptingRemoveValueForSpecifier:(id)a0;
- (id)_scriptingSetValue:(id)a0 forSpecifier:(id)a1;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)CAMLType;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
