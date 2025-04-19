@interface CloudTelemetry : NSObject

+ (BOOL)reportWithTeamID:(id)a0 eventName:(id)a1 event:(id)a2 error:(id *)a3;
+ (BOOL)reportWithTeamID:(id)a0 eventType:(id)a1 event:(id)a2 error:(id *)a3;
+ (BOOL)setupXpcServiceActivitiesAndReturnError:(id *)a0;

- (id)init;

@end
