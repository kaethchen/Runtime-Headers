@class NSString, NSDate;

@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (readonly, nonatomic) BOOL isForSnooze;
@property (readonly, nonatomic) BOOL isForGoToBed;
@property (readonly, nonatomic) BOOL isForAlert;
@property (readonly, nonatomic) BOOL isForNotification;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) BOOL isEvent;
@property (readonly, nonatomic) BOOL isBedtimeRelated;
@property (readonly, nonatomic) BOOL isWakeUpRelated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForType:(unsigned long long)a0;
+ (id)triggerWithDate:(id)a0 triggerType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqualToTrigger:(id)a0;
- (id)initWithDate:(id)a0 type:(unsigned long long)a1;

@end
