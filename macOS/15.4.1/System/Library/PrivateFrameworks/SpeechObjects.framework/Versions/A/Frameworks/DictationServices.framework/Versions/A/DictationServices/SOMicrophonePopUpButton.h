@class NSImageView, NSTextField, NSView, SOMicrophoneLevelMeterController;

@interface SOMicrophonePopUpButton : NSPopUpButton {
    NSView *_hortizontallyCenteredView;
    SOMicrophoneLevelMeterController *_microphoneLevelController;
}

@property id delegate;
@property (readonly) BOOL containsCautionaryInfo;
@property BOOL suppressCautionaryInfo;
@property (retain) NSImageView *cautionaryImageView;
@property (retain) NSTextField *cautionaryExplanation;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (long long)indexOfSelectedItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initCommon;
- (void)_audioDeviceRecievedNotification:(id)a0;
- (void)_initializeCautionIconView;
- (void)_popUpMenuDidSendAction:(id)a0;
- (void)_popUpMenuWillSendAction:(id)a0;
- (id)_selectedAudioDevice;
- (id)_selectedAudioSourceUsingResolvedAutomaticSelection:(BOOL)a0;
- (void)buildPopUpButton;
- (id)selectedMicrophoneIdentifier;
- (id)selectedMicrophoneName;
- (id)selectedOrResolvedAutomaticMicrophoneIdentifier;

@end
