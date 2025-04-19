@class NSString, NSDate;

@interface BMMomentsEngagementNotificationInfo : BMEventBase <BMStoreData> {
    BOOL _hasRaw_notificationEventTimestamp;
    double _raw_notificationEventTimestamp;
    BOOL _hasRaw_notificationPostingTimestamp;
    double _raw_notificationPostingTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *notificationEventTimestamp;
@property (readonly, nonatomic) NSDate *notificationPostingTimestamp;
@property (readonly, nonatomic) int notificationSuggestionCount;
@property (nonatomic) BOOL hasNotificationSuggestionCount;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithNotificationEventTimestamp:(id)a0 notificationPostingTimestamp:(id)a1 notificationSuggestionCount:(id)a2;

@end
