@class NSString;

@interface BMOasisAnalyticsContextSnapshotType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) float luxLevel;
@property (nonatomic) BOOL hasLuxLevel;
@property (readonly, nonatomic) float smudgeLevel;
@property (nonatomic) BOOL hasSmudgeLevel;
@property (readonly, nonatomic) float prewittLevel;
@property (nonatomic) BOOL hasPrewittLevel;
@property (readonly, nonatomic) float imuAcceleration;
@property (nonatomic) BOOL hasImuAcceleration;
@property (readonly, nonatomic) float imuAngularVelocityX;
@property (nonatomic) BOOL hasImuAngularVelocityX;
@property (readonly, nonatomic) float imuAngularVelocityY;
@property (nonatomic) BOOL hasImuAngularVelocityY;
@property (readonly, nonatomic) float imuAngularVelocityZ;
@property (nonatomic) BOOL hasImuAngularVelocityZ;
@property (readonly, nonatomic) int environmentType;
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
- (id)initWithLuxLevel:(id)a0 smudgeLevel:(id)a1 prewittLevel:(id)a2 imuAcceleration:(id)a3 imuAngularVelocityX:(id)a4 imuAngularVelocityY:(id)a5 imuAngularVelocityZ:(id)a6 environmentType:(int)a7;

@end
