@class SUSharedPrefs, NSString, SUOSUProduct, NSError;

@interface SUOSUTelemetryInstallEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property SUOSUProduct *installProduct;
@property unsigned long long clientType;
@property BOOL mdmInitiated;
@property NSError *installError;
@property (retain) SUSharedPrefs *sharedPrefs;
@property unsigned long long totalRequiredFreeSpace;
@property unsigned long long bytesPurged;
@property BOOL cacheDeleteSuccessfullyFreedSpace;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)init;
- (void).cxx_destruct;
- (id)createReportableDictionary;
- (id)initWithSharedPrefs:(id)a0;
- (void)addTelemetryEventWithProduct:(id)a0 clientType:(unsigned long long)a1 mdmInitiated:(BOOL)a2 installError:(id)a3;
- (void)addTelemetryEventWithTotalRequiredFreeSpace:(unsigned long long)a0 bytesPurged:(unsigned long long)a1 cacheDeleteSuccessfullyFreedSpace:(BOOL)a2;

@end
