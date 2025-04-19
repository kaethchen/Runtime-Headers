@class NSError, NSString;

@interface SSCompatibilityModeLocalDisplayMonitor : NSObject <SSLocalDisplayMonitoring>

@property (readonly, nonatomic) BOOL supportsHDRVideoReferencePreset;
@property (readonly, nonatomic) BOOL isHDRVideoReferencePresetSelected;
@property (readonly, nonatomic) NSError *hdrUnavailableError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
