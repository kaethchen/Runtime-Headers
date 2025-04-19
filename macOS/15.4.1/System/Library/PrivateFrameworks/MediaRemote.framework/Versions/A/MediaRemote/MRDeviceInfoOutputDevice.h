@interface MRDeviceInfoOutputDevice : MRAVDistantOutputDevice

- (id)initWithDeviceInfo:(id)a0;
- (id)initWithDeviceInfo:(id)a0 fallbackOutputDevice:(id)a1 forExporting:(BOOL)a2;
- (id)initWithDeviceInfo:(id)a0 forExporting:(BOOL)a1;
- (BOOL)shouldBeLocallyHosted;

@end
