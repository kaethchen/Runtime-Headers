@class NSString, NSMutableArray, NSURL;

@interface IKPathPopupButton : NSPopUpButton {
    BOOL _enableICTasks;
    BOOL _enableAutomatorActions;
}

@property long long lastSelection;
@property long long selectedPathType;
@property (nonatomic) BOOL hotplugActionMode;
@property (nonatomic) BOOL includeAutoDownloader;
@property (nonatomic) BOOL includeMoviesAsStandardDirectory;
@property (nonatomic) BOOL canChooseApplications;
@property (nonatomic) BOOL canChooseDirectories;
@property (nonatomic) BOOL canChooseImageCaptureTools;
@property (nonatomic) BOOL canChooseImageCaptureWorkflows;
@property (nonatomic) BOOL enableMakeSubFoldersPerCamera;
@property BOOL makeSubFoldersPerCamera;
@property (retain) NSMutableArray *defaultDirs;
@property (retain) NSMutableArray *defaultApps;
@property (retain) NSMutableArray *userDirs;
@property (retain) NSMutableArray *userApps;
@property (retain) NSMutableArray *icApps;
@property (retain) NSMutableArray *icWorkflows;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) NSURL *url;
@property SEL actionApp;
@property SEL actionDir;

+ (id)sampleFileTypes;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(BOOL)a1;
- (void)setAction:(SEL)a0;
- (void)addApplication:(id)a0;
- (void)draggingExited:(id)a0;
- (void)awakeFromNib;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setup;
- (void)doInit;
- (void)selectApp:(id)a0;
- (void)popupWillPopup:(id)a0;
- (void)selectWorkflow:(id)a0;
- (void)choose:(id)a0;
- (void)saveSelectedTag;
- (void)addFolder:(id)a0;
- (void)addItemWithPath:(id)a0 selector:(SEL)a1 tag:(long long)a2;
- (void)addPath:(id)a0 toArray:(id)a1 sibling:(id)a2 max:(long long)a3;
- (void)ikSelectItemWithRepresentedObject:(id)a0;
- (void)pushSelection;
- (void)readjust;
- (void)rebuildItems;
- (void)restorePaths;
- (void)restoreSelectedTag;
- (void)savePaths;
- (void)selectFolder:(id)a0;
- (void)setUserSelectedURL:(id)a0;
- (void)setupGroup:(id)a0 base:(long long)a1 selector:(SEL)a2;
- (void)subFolder:(id)a0;

@end
