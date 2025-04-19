@class ULLocationType, NSArray, ULServiceDescriptor, NSUUID, NSError, ULServiceQualityInfo, ULServiceMetaInfo;

@interface ULServiceStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long serviceState;
@property (retain, nonatomic) NSArray *serviceSuspendReasons;
@property (retain, nonatomic) ULServiceDescriptor *serviceDescriptor;
@property (retain, nonatomic) NSUUID *currentLocationOfInterestUuid;
@property (retain, nonatomic) ULLocationType *currentLocationOfInterestType;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) ULServiceQualityInfo *serviceQualityInfo;
@property (retain, nonatomic) ULServiceMetaInfo *metaInfo;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceState:(unsigned long long)a0 serviceSuspendReasons:(id)a1 serviceDescriptor:(id)a2 currentLocationOfInterestUuid:(id)a3 currentLocationOfInterestType:(id)a4 error:(id)a5 serviceQualityInfo:(id)a6 metaInfo:(id)a7;
- (void)updateServiceState:(unsigned long long)a0;
- (void)updateServiceSuspendReasons:(id)a0;

@end
