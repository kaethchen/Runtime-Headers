@class NSString, NSArray, NSDate;

@interface BMWalletPaymentsCommerceUserProofingResult : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *age;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) NSString *gestureAssessment;
@property (readonly, nonatomic) NSArray *axSettings;
@property (readonly, nonatomic) NSString *facVersion;
@property (readonly, nonatomic) NSString *facePoseVersion;
@property (readonly, nonatomic) NSString *padtoolVersion;
@property (readonly, nonatomic) NSString *prdVersion;
@property (readonly, nonatomic) BOOL didStepUp;
@property (nonatomic) BOOL hasDidStepUp;
@property (readonly, nonatomic) NSString *passiveGestureAssessment;
@property (readonly, nonatomic) NSString *passiveLivenessAssessment;
@property (readonly, nonatomic) NSString *passiveLivenessFacVersion;
@property (readonly, nonatomic) NSString *passiveLivenessFacePoseVersion;
@property (readonly, nonatomic) NSString *passiveLivenessPadtoolVersion;
@property (readonly, nonatomic) NSString *passiveLivenessPrdVersion;
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
- (id)_axSettingsJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7 livenessAssessment:(id)a8 gestureAssessment:(id)a9 axSettings:(id)a10;
- (id)initWithAbsoluteTimestamp:(id)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7 livenessAssessment:(id)a8 gestureAssessment:(id)a9 axSettings:(id)a10 facVersion:(id)a11 facePoseVersion:(id)a12 padtoolVersion:(id)a13 prdVersion:(id)a14;
- (id)initWithAbsoluteTimestamp:(id)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7 livenessAssessment:(id)a8 gestureAssessment:(id)a9 axSettings:(id)a10 facVersion:(id)a11 facePoseVersion:(id)a12 padtoolVersion:(id)a13 prdVersion:(id)a14 didStepUp:(id)a15 passiveGestureAssessment:(id)a16 passiveLivenessAssessment:(id)a17 passiveLivenessFacVersion:(id)a18 passiveLivenessFacePoseVersion:(id)a19 passiveLivenessPadtoolVersion:(id)a20 passiveLivenessPrdVersion:(id)a21;

@end
