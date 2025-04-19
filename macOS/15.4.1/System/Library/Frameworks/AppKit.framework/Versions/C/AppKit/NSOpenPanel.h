@class NSArray;

@interface NSOpenPanel : NSSavePanel

@property BOOL showsContentTypes;
@property (readonly, copy) NSArray *URLs;
@property BOOL resolvesAliases;
@property BOOL canChooseDirectories;
@property BOOL allowsMultipleSelection;
@property BOOL canChooseFiles;
@property BOOL canResolveUbiquitousConflicts;
@property BOOL canDownloadUbiquitousContents;
@property (getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;

+ (id)openPanel;
+ (void)_showExistingOpenPanel:(id)a0;

- (BOOL)_accessoryViewDisclosureIsSupported;
- (BOOL)_canAddUnderTitlebarViews;
- (id)_descriptionProperties;
- (BOOL)_excludeFilesInEnableURLDelegateCheck;
- (void)_hideTitlebar;
- (BOOL)_isTitleHidden;
- (BOOL)_saveMode;
- (void)_setDefaultBridgeValues;
- (id)accessibilityIdentifier;
- (void)beginForDirectory:(id)a0 file:(id)a1 types:(id)a2 modelessDelegate:(id)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (void)configureContentView:(id)a0;
- (void)delegateRequestNewDocumentNameWithReply:(id /* block */)a0;
- (void)delegateShouldCreateNewDocumentAtURL:(id)a0;
- (id)filenames;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isMovable;
- (BOOL)preventsApplicationTerminationWhenModal;
- (void)setContentTypeNames:(id)a0;
- (void)setCurrentContentType:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startRectForSheet:(id)a0;
- (unsigned long long)styleMaskForHostWindow;

@end
