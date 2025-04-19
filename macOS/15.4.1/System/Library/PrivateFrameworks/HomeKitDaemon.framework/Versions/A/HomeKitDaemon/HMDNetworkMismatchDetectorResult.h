@class NSArray;

@interface HMDNetworkMismatchDetectorResult : NSObject

@property (readonly, copy) NSArray *accessoriesNotOnWiFi;
@property (readonly, copy) NSArray *accessoriesNotOnWiFiAndNotConnectingToPrimaryResident;
@property (readonly, copy) NSArray *accessoriesReportingDiagnostic;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccessoriesNotOnWiFi:(id)a0 accessoriesNotOnWiFiAndNotConnectingToPrimaryResident:(id)a1 accessoriesReportingDiagnostic:(id)a2;

@end
