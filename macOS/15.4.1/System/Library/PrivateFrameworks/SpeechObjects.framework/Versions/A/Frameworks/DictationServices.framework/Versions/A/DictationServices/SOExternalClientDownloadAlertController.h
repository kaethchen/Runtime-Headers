@class NSButton, SOSRLanguageItem, NSTextField;

@interface SOExternalClientDownloadAlertController : NSWindowController {
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    NSButton *_doNotAskAgainCheckbox;
    SOSRLanguageItem *_languageItem;
    int _clientPid;
    id /* block */ _completion;
}

+ (BOOL)isDownloadAlertVisible;
+ (id)sharedSOExternalClientDownloadAlertController;

- (void)dealloc;
- (void)cancelDownload:(id)a0;
- (void)startDownload:(id)a0;
- (void)showAlertForPID:(int)a0 languageItem:(id)a1 completion:(id /* block */)a2;

@end
