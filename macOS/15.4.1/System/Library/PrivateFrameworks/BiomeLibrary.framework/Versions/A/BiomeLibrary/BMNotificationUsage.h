@class NSString, NSArray, NSDate;

@interface BMNotificationUsage : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) int usageType;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) unsigned long long badge;
@property (nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) NSArray *contactIDs;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) unsigned int bodyLength;
@property (nonatomic) BOOL hasBodyLength;
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
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 usageType:(int)a2 bundleID:(id)a3 notificationID:(id)a4 deviceID:(id)a5 title:(id)a6 subtitle:(id)a7 body:(id)a8 badge:(id)a9 threadID:(id)a10 categoryID:(id)a11 sectionID:(id)a12 contactIDs:(id)a13 isGroupMessage:(id)a14 parentBundleID:(id)a15 bodyLength:(id)a16;
- (id)_contactIDsJSONArray;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 usageType:(int)a2 bundleID:(id)a3 notificationID:(id)a4 deviceID:(id)a5 title:(id)a6 subtitle:(id)a7 body:(id)a8 badge:(id)a9 threadID:(id)a10 categoryID:(id)a11 sectionID:(id)a12 contactIDs:(id)a13 isGroupMessage:(id)a14;

@end
