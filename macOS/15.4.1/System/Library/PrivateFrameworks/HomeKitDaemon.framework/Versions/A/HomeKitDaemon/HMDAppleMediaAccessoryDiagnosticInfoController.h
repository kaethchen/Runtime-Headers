@protocol HMDAppleMediaAccessoryDiagnosticInfoControllerDataSource;

@interface HMDAppleMediaAccessoryDiagnosticInfoController : NSObject

@property (readonly) BOOL isHH2Mode;
@property (readonly, weak) id<HMDAppleMediaAccessoryDiagnosticInfoControllerDataSource> dataSource;

+ (id)diagnosticInfoDescriptionWithData:(id)a0;
+ (id)snapshotForDataSource:(id)a0;

- (void).cxx_destruct;
- (id)_diagnosticInfoWithAdditionalKeys:(id)a0 filterKeyPaths:(id)a1;
- (id)diagnosticInfoDataWithAdditionalKeys:(id)a0;
- (id)diagnosticInfoDataWithAdditionalKeys:(id)a0 filterKeyPaths:(id)a1;
- (id)initWithDataSource:(id)a0 isHH2Mode:(BOOL)a1;

@end
