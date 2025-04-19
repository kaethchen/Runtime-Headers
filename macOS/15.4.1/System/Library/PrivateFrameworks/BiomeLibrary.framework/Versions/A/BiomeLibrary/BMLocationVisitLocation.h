@class NSString, NSDate;

@interface BMLocationVisitLocation : BMEventBase <BMStoreData> {
    BOOL _hasRaw_date;
    double _raw_date;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double latitude;
@property (nonatomic) BOOL hasLatitude;
@property (readonly, nonatomic) double longitude;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) double horizontalUncertainty;
@property (nonatomic) BOOL hasHorizontalUncertainty;
@property (readonly, nonatomic) double altitude;
@property (nonatomic) BOOL hasAltitude;
@property (readonly, nonatomic) double verticalUncertainty;
@property (nonatomic) BOOL hasVerticalUncertainty;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) int sourceAccuracy;
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
- (id)initWithLatitude:(id)a0 longitude:(id)a1 horizontalUncertainty:(id)a2 altitude:(id)a3 verticalUncertainty:(id)a4 date:(id)a5 referenceFrame:(int)a6 sourceAccuracy:(int)a7;
- (id)initByReadFrom:(id)a0;

@end
