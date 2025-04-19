@class NSDate;

@interface UNCNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)_dateFormatter;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
