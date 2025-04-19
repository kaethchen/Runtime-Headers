@class NSTextField, NSString, NSArray, NSProgressIndicator, NSTimer, SODownloadDisplayManager;

@interface SOSRLanguagePopUpButton : NSPopUpButton {
    long long _numberOfFixedItemsAtEndOfMenu;
    NSTextField *_downloadStatusTextField;
    NSProgressIndicator *_downloadStatusProgressIndicator;
    NSTimer *_downloadStatusUpdateTimer;
    NSTimer *_pendingDownloadStatusCompletionWhileDictationPreHeatsTimer;
    SODownloadDisplayManager *_downloadDisplayManager;
}

@property (retain) NSString *previouslyChosenLocaleIdentifier;
@property (retain) NSArray *networkBasedLocaleIdentifiers;
@property (retain) NSArray *offlineBasedLocaleIdentifiers;
@property BOOL languagesAreDownloadable;
@property BOOL showOnlyNetworkSupportedItems;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)_initCommon;
- (void)buildPopUpButtonAndSelectLocaleIdentifier:(id)a0 networkSupportedLocaleIdentifiers:(id)a1 offlineSupportedLocaleIdentifiers:(id)a2;
- (id)selectedLanguageItem;
- (id)_statusStringForActiveDownloads;
- (void)_clearDownloadStatusFieldAfterPreHeat;
- (void)_startDelayedPopUpUpdate;
- (void)_updateDownloadStatusFields;
- (void)_updateSRLanguageMenu;
- (void)installationFinished:(id)a0;

@end
