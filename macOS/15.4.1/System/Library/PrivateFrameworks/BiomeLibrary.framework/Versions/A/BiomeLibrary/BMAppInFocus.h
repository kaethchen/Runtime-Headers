@class NSString, NSDate;

@interface BMAppInFocus : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int launchType;
@property (readonly, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) NSString *exactVersionString;
@property (readonly, nonatomic) unsigned int dyldPlatform;
@property (nonatomic) BOOL hasDyldPlatform;
@property (readonly, nonatomic) BOOL isNativeArchitecture;
@property (nonatomic) BOOL hasIsNativeArchitecture;
@property (readonly, nonatomic) int displayType;
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
- (id)initWithLaunchReason:(id)a0 launchType:(int)a1 starting:(id)a2 absoluteTimestamp:(id)a3 duration:(id)a4 bundleID:(id)a5 parentBundleID:(id)a6 extensionHostID:(id)a7 shortVersionString:(id)a8 exactVersionString:(id)a9 dyldPlatform:(id)a10 isNativeArchitecture:(id)a11;
- (id)initWithLaunchReason:(id)a0 launchType:(int)a1 starting:(id)a2 absoluteTimestamp:(id)a3 duration:(id)a4 bundleID:(id)a5 parentBundleID:(id)a6 extensionHostID:(id)a7 shortVersionString:(id)a8 exactVersionString:(id)a9;
- (id)initWithLaunchReason:(id)a0 type:(int)a1 starting:(id)a2 absoluteTimestamp:(id)a3 bundleID:(id)a4 parentBundleID:(id)a5 extensionHostID:(id)a6 shortVersionString:(id)a7 exactVersionString:(id)a8 dyldPlatform:(id)a9 isNativeArchitecture:(id)a10;
- (id)initWithLaunchReason:(id)a0 type:(int)a1 starting:(id)a2 absoluteTimestamp:(id)a3 bundleID:(id)a4 parentBundleID:(id)a5 extensionHostID:(id)a6 shortVersionString:(id)a7 exactVersionString:(id)a8 dyldPlatform:(id)a9 isNativeArchitecture:(id)a10 displayType:(int)a11;

@end
