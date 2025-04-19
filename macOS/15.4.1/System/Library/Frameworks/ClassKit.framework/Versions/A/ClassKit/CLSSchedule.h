@class NSString, NSDate;

@interface CLSSchedule : CLSObject <CLSRelationable> {
    long long _scheduledEntityType;
    long long _scheduleAction;
    NSDate *_scheduleDate;
    long long _scheduleUpdateStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scheduledEntityType;
@property (nonatomic) long long scheduleAction;
@property (nonatomic) long long scheduleUpdateStatus;
@property (retain, nonatomic) NSDate *scheduleDate;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initForObject:(id)a0 scheduleDate:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
