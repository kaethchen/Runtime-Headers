@interface _DPLHBitacoraLogger : NSObject

+ (id)bitacoraDprivacydEventWithEventPhase:(int)a0 uuid:(id)a1 succeeded:(BOOL)a2 errorCode:(int)a3 errorMessage:(id)a4 aggregateFunction:(int)a5 count:(int)a6;
+ (BOOL)donateEventToBitacoraForKey:(id)a0 eventPhase:(int)a1 uuid:(id)a2 succeeded:(BOOL)a3 errorCode:(int)a4 errorMessage:(id)a5 aggregateFunction:(int)a6 count:(int)a7 telemetryAllowed:(BOOL)a8;
+ (id)trialIdentifiersForKey:(id)a0;

@end
