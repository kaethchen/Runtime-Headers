@class NSData;

@interface MTRDeviceControllerExternalCertificateParameters : MTRDeviceControllerParameters

@property (readonly, copy, nonatomic) NSData *rootCertificate;

- (id)initWithStorageDelegate:(id)a0 storageDelegateQueue:(id)a1 uniqueIdentifier:(id)a2 ipk:(id)a3 vendorID:(id)a4 operationalKeypair:(id)a5 operationalCertificate:(id)a6 intermediateCertificate:(id)a7 rootCertificate:(id)a8;

@end
