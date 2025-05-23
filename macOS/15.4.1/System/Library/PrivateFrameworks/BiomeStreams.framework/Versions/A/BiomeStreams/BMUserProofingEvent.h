@class NSString;

@interface BMUserProofingEvent : NSObject <BMStoreData, BMProtoBufWrapper, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *age;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) NSString *deviceRegion;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) NSString *gestureAssessment;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7;
- (id)initWithAbsoluteTimestamp:(double)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7 livenessAssessment:(id)a8 gestureAssessment:(id)a9;
- (id)initWithAbsoluteTimestamp:(double)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceRegion:(id)a5 proofingDecision:(id)a6;
- (id)initWithProto:(id)a0;

@end
