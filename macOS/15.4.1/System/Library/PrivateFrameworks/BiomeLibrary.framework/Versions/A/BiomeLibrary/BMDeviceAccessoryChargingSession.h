@class NSString;

@interface BMDeviceAccessoryChargingSession : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int productID;
@property (nonatomic) BOOL hasProductID;
@property (readonly, nonatomic) unsigned int firmwareVersion;
@property (nonatomic) BOOL hasFirmwareVersion;
@property (readonly, nonatomic) double startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (readonly, nonatomic) int side;
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
- (id)initWithProductID:(id)a0 firmwareVersion:(id)a1 startTimestamp:(id)a2 endTimestamp:(id)a3 side:(int)a4;

@end
