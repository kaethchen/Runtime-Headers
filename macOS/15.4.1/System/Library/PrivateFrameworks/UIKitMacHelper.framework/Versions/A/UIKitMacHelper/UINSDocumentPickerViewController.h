@class NSArray, NSString, NSSavePanel, NSOpenPanel, NSURL, NSWindow;

@interface UINSDocumentPickerViewController : NSObject <UINSDocumentPickerViewController> {
    NSWindow *_parentWindow;
    unsigned long long _documentPickerMode;
    NSArray *_documentTypes;
    NSOpenPanel *_openPanel;
    NSSavePanel *_savePanel;
    NSArray *_urls;
    NSString *_utiForFirstURL;
    NSOpenPanel *_movePanel;
    BOOL _allowsMultipleSelection;
    NSURL *_directoryURL;
}

- (void).cxx_destruct;
- (void)setDirectoryURL:(id)a0;
- (void)setURLs:(id)a0;
- (void)dismiss;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)beginSheetModalWithCompletion:(id /* block */)a0;
- (id)initWithParentWindow:(id)a0;
- (void)setDocumentPickerMode:(unsigned long long)a0;
- (void)setDocumentTypes:(id)a0;

@end
