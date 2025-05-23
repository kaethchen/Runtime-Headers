@class NSString;

@interface BMClockAlarm : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isSleepAlarm;
@property (nonatomic) BOOL hasIsSleepAlarm;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) int lastEventType;
@property (readonly, nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithIsSleepAlarm:(id)a0 eventType:(int)a1 alarmID:(id)a2 lastEventType:(int)a3;
- (id)initWithIsSleepAlarm:(id)a0 eventType:(int)a1 alarmID:(id)a2 lastEventType:(int)a3 enabled:(id)a4;

@end
