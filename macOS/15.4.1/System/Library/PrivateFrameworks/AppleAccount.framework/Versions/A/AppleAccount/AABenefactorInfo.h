@class NSString, NSUUID, AKInheritanceAccessKey;

@interface AABenefactorInfo : NSObject <AAInheritanceContactInfo, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, copy) NSString *handle;
@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, nonatomic) NSString *benefactorAltDSID;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly, nonatomic) NSUUID *otPeerID;
@property (readonly, nonatomic) NSString *repairDate;
@property (readonly, nonatomic) unsigned long long repairCount;
@property (readonly, nonatomic) NSString *recordBuildVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_statusDescription;
- (id)initWithBeneficiaryID:(id)a0 benefactorAltDSID:(id)a1;
- (id)initWithBeneficiaryID:(id)a0 benefactorAltDSID:(id)a1 handle:(id)a2;
- (id)initWithBeneficiaryID:(id)a0 handle:(id)a1 status:(long long)a2;

@end
