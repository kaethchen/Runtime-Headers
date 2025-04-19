@class NSTextField, NSString, NSArray, NSSearchField, NSSpeechSynthesizer, NSSound, NSTimer, NSMutableSet, NSButton, NSTableView;

@interface CustomizeVoicesWindowController : NSWindowController <NSTabViewDelegate, NSSoundDelegate, NSSpeechSynthesizerDelegate> {
    NSTableView *_voiceSelectionTableView;
    NSButton *_okButton;
    NSButton *_playStopButton;
    NSSearchField *_searchField;
    NSTextField *_selectedDownloadSizeTextField;
    NSTextField *_noResultsFoundTextField;
    NSSpeechSynthesizer *_synthesizer;
    NSSound *_audioChannel;
    NSArray *_allVoicesObjects;
    NSArray *_currentlyDisplayedVoiceRows;
    NSArray *_voiceIdentifiersNotToBeRemoved;
    NSMutableSet *_markedForUpgradeSet;
    NSMutableSet *_markedForDeletionSet;
    NSTimer *_downloadStatusUpdateTimer;
    BOOL _showIndividualVoiceQualities;
    BOOL _popUpWasInitiallyBeenBuilt;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(int)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)_updateButtonStates;
- (void)searchFieldChanged:(id)a0;
- (BOOL)_anyVoicePlaying;
- (void)_delayedPopUpUpdate;
- (BOOL)_isSampleAvailableForVoiceObject:(id)a0;
- (void)_propagateCheckboxSelection:(id)a0;
- (void)_propagateDownloadCheckboxSelection:(id)a0;
- (void)_propagateDownloadVariantSelection:(id)a0;
- (void)_rebuildVoiceList;
- (void)_setRowDownloadCheckbox:(id)a0 voiceObject:(id)a1 isSelected:(BOOL)a2;
- (void)_setRowStatusFieldView:(id)a0 voiceObject:(id)a1 isSelected:(BOOL)a2;
- (BOOL)_shouldAllowRemovalOfVoiceObject:(id)a0;
- (void)_showPlayStopButtonAsPlaying:(BOOL)a0;
- (void)_stopAndResetAllVoicePlaying;
- (void)_updateDisplayedVoicesUsingFilterString:(id)a0;
- (void)_updateRowDownloadStatus;
- (id)_voiceObjectForCurrentlySelectedRow;
- (void)acceptVoiceSelection:(id)a0;
- (void)cancelVoiceSelection:(id)a0;
- (void)showSheetForWindow:(id)a0 showIndividualVoiceQualities:(BOOL)a1 voiceIdentifiersNotToBeRemoved:(id)a2;
- (void)startStopPlayingSelection:(id)a0;

@end
