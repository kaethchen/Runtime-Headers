@class NSNumber, NSData;

@interface MKFLocalOperationalCertificateData : HMDManagedObject

@property (copy, nonatomic) NSNumber *fabricID;
@property (retain, nonatomic) NSData *ipk;
@property (retain, nonatomic) NSData *operationalCert;
@property (copy, nonatomic) NSNumber *ownerNodeID;
@property (retain, nonatomic) NSData *rootCert;

+ (id)fetchRequest;

@end
