@class NSMatrix;

@interface DREraseSetupPanel : DRSetupPanel {
    NSMatrix *_eraseTypes;
    void *_reservedEraseSetupPanel[2];
    void *_esp_privateStorage;
}

+ (void)initialize;
+ (id)setupPanel;

- (id)init;
- (void)ok:(id)a0;
- (void)open:(id)a0;
- (id)initWithNibName:(id)a0;
- (void)setupForDisplay;
- (void)_confirmSheetDidDismiss:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)defaultDeviceKey;
- (void)deviceSelectionChanged:(id)a0;
- (void)eject:(id)a0;
- (id)eraseObject;
- (void)eraseType:(id)a0;
- (BOOL)mediaStateChanged:(id)a0;
- (void)setEraseTypes:(id)a0;

@end
