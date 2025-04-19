@class CWInterface, NSString;

@interface DMTCoreWLANBackedWiFiScanningPrimitives : NSObject <DMTWiFiScanningPrimitives>

@property (readonly, nonatomic) CWInterface *defaultInterface;
@property (readonly, nonatomic) BOOL hasWiFiInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scanForNetworksWithName:(id)a0 error:(out id *)a1;
- (BOOL)powerOnWiFiWithError:(out id *)a0;

@end
