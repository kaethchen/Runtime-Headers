@interface VoiceSettingsSheetController : VoiceSettingsWindowController

+ (id)defaultVoiceSettingsSheetController;

- (void)closeWindow;
- (void)showSheetWithVoiceSettings:(id)a0 modalDelegate:(id)a1 modalForWindow:(id)a2;

@end
