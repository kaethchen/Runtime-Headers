@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)getOSVersion;
- (id)initWithContainerID:(id)a0;
- (id)getSerialNumber;
- (id)getDeviceInfo;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;
- (id)getTCONControlPreferences;
- (id)getTCONFWVersion;
- (id)getTCONRegs;

@end
