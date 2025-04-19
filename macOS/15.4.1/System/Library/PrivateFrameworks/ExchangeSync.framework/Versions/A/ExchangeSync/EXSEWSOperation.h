@class EXSEWSSyncProtocol;

@interface EXSEWSOperation : NSObject

@property (retain, nonatomic) EXSEWSSyncProtocol *protocol;

+ (id)log;
+ (void)addEWSAlarmRequestObjectToArray:(id)a0 withType:(id)a1 andValue:(id)a2 forRequestType:(long long)a3;
+ (void)adjustCustomPropertiesToReflectAlarm:(id)a0 forAlarm:(id)a1 forRequestType:(long long)a2;
+ (BOOL)applyEXSAlarmToEWSEvent:(id)a0 withAlarm:(id)a1 forFieldType:(long long)a2;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)deriveRevisedAttendeesFromProperties:(id)a0 required:(BOOL)a1;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)myEXSAttendeeFromEventProperties:(id)a0;
- (BOOL)parseDelegateResponse:(id)a0 error:(id *)a1;

@end
