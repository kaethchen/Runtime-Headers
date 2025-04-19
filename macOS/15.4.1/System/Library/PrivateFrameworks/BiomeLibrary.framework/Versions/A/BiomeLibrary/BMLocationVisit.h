@class NSString, BMLocationVisitLocation, BMPlaceInference, NSDate;

@interface BMLocationVisit : BMEventBase <BMStoreData> {
    BOOL _hasRaw_detectionDate;
    double _raw_detectionDate;
    BOOL _hasRaw_entryDate;
    double _raw_entryDate;
    BOOL _hasRaw_exitDate;
    double _raw_exitDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BMLocationVisitLocation *location;
@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) BMPlaceInference *placeInference;
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
- (id)initWithDetectionDate:(id)a0 type:(int)a1 location:(id)a2 entryDate:(id)a3 exitDate:(id)a4 confidence:(id)a5 source:(int)a6 placeInference:(id)a7;
- (id)initByReadFrom:(id)a0;

@end
