@interface SKIFitnessInvocation : NSObject

+ (void)updateDict:(id)a0 withAnnouncePayload:(id)a1;
+ (id)announcePayloadFromUserData:(id)a0;
+ (id)announceWorkoutReminder:(id)a0 announcePayload:(id)a1;
+ (id)announceWorkoutVoiceFeedback:(id)a0 announcePayload:(id)a1;
+ (id)updateStartLocalRequest:(id)a0 withNewAnnouncePayload:(id)a1;
+ (id)workoutReminderFromPayload:(id)a0;

@end
