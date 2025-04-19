@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeWifiUpload;
@property (readonly) NSMeasurement *cumulativeWifiDownload;
@property (readonly) NSMeasurement *cumulativeCellularUpload;
@property (readonly) NSMeasurement *cumulativeCellularDownload;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCumulativeWifiUploadMeasurement:(id)a0 cumulativeWifiDownloadMeasurement:(id)a1 cumulativeCellularUploadMeasurement:(id)a2 cumulativeCellularDownloadMeasurement:(id)a3;

@end
