@class NSString, NSError, NSObject, NSWindow;
@protocol SSDisplayDetailsPrimitives;

@interface SSVirtualDisplayLocalDisplayMonitor : NSObject <SSLocalDisplayMonitoring>

@property (nonatomic) BOOL supportsHDRVideoReferencePreset;
@property (nonatomic) BOOL isHDRVideoReferencePresetSelected;
@property (retain, nonatomic) NSError *hdrUnavailableError;
@property (readonly, nonatomic) NSObject<SSDisplayDetailsPrimitives> *primitives;
@property (readonly, nonatomic) NSWindow *monitoredWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)windowDidChangeScreen:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)displaysDidReconfigure;
- (id)initWithPrimitives:(id)a0 monitoredWindow:(id)a1;
- (void)recomputeHDREligibility;
- (void)setSupportsHDR:(BOOL)a0 presetIsSelected:(BOOL)a1 error:(id)a2;

@end
