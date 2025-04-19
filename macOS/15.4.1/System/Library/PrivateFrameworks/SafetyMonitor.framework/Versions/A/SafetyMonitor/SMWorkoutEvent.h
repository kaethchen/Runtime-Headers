@class NSUUID, NSDate, SMLocation;

@interface SMWorkoutEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) SMLocation *location;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, nonatomic) BOOL isResumedSessionState;
@property (readonly, nonatomic) NSDate *date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 sessionIdentifier:(id)a1 location:(id)a2 activityType:(unsigned long long)a3 locationType:(long long)a4 swimmingLocationType:(long long)a5 sessionState:(unsigned long long)a6 isResumedSessionState:(BOOL)a7 date:(id)a8;
- (id)outputToDictionary;

@end
