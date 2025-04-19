@class NSArray;

@interface PPSCadence : NSObject

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceEventSBC;
+ (id)cadenceEventSBC_EventScreenStateChange;
+ (id)cadenceEventXPCWithFrequency:(int)a0;
+ (id)cadenceInit;
+ (id)cadenceInit_EventSBC;
+ (id)cadenceWithJSONObject:(id)a0;
+ (id)cadenceWithProto:(id)a0;
+ (BOOL)isValidCadenceJSON:(id)a0;

- (void).cxx_destruct;
- (id)json;
- (id)proto;
- (id)initWithCadenceTuples:(id)a0;

@end
