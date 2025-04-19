@class NSArray, NSString, NSDate;

@interface BMProactiveHarvestingNotifications : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (nonatomic) BOOL hasIsTimeSensitive;
@property (readonly, nonatomic) BOOL isCritical;
@property (nonatomic) BOOL hasIsCritical;
@property (readonly, nonatomic) BOOL isCommunicationNotification;
@property (nonatomic) BOOL hasIsCommunicationNotification;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fromHandles;
@property (readonly, nonatomic) NSArray *toHandles;
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
- (id)_attachmentsJSONArray;
- (id)_fromHandlesJSONArray;
- (id)_toHandlesJSONArray;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 bundleID:(id)a2 notificationID:(id)a3 title:(id)a4 subtitle:(id)a5 body:(id)a6 threadID:(id)a7 category:(id)a8 isGroupMessage:(id)a9 isTimeSensitive:(id)a10 isCritical:(id)a11 isCommunicationNotification:(id)a12 contentProtection:(id)a13 personaId:(id)a14 attachments:(id)a15 fromHandles:(id)a16 toHandles:(id)a17;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 bundleID:(id)a2 notificationID:(id)a3 title:(id)a4 subtitle:(id)a5 body:(id)a6 threadID:(id)a7 category:(id)a8 isGroupMessage:(id)a9 isTimeSensitive:(id)a10 isCritical:(id)a11 isCommunicationNotification:(id)a12 contentProtection:(id)a13 personaId:(id)a14 attachments:(id)a15 handles:(id)a16;

@end
