@class NSString, NSDate;

@interface BMDeviceCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timeStamp;
    double _raw_timeStamp;
    BOOL _hasRaw_latestStrongTimeStamp;
    double _raw_latestStrongTimeStamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int deviceRegistrationStatus;
@property (readonly, nonatomic) int previousDeviceRegistrationStatus;
@property (readonly, nonatomic) BOOL aboveThreshold;
@property (nonatomic) BOOL hasAboveThreshold;
@property (readonly, nonatomic) NSDate *latestStrongTimeStamp;
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
- (id)initWithTimeStamp:(id)a0 deviceType:(int)a1 deviceRegistrationStatus:(int)a2;
- (id)initWithTimeStamp:(id)a0 deviceType:(int)a1 deviceRegistrationStatus:(int)a2 previousDeviceRegistrationStatus:(int)a3;
- (id)initWithTimeStamp:(id)a0 deviceType:(int)a1 deviceRegistrationStatus:(int)a2 previousDeviceRegistrationStatus:(int)a3 aboveThreshold:(id)a4 latestStrongTimeStamp:(id)a5;

@end
