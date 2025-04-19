@class NSTextField, NSProgressIndicator, IOBluetoothDevice, NSString, NSTimer, IOBluetoothTransferProgressUI, NSPanel, NSMutableArray, OBEXFileTransferServices, NSImageView, NSButton;

@interface IOBluetoothConcreteObjectPush : NSWindowController {
    NSTextField *mFileStatusField;
    NSTextField *mFileTransferredField;
    NSTextField *mFileRemainingField;
    NSProgressIndicator *mFileProgressIndicator;
    NSButton *mFileAbortButton;
    NSImageView *mFileIconView;
    id mDelegate;
    NSMutableArray *mFileRefs;
    int mCurrentFileIndex;
    OBEXFileTransferServices *mFTPModule;
    BOOL mTargetIsAMac;
    BOOL mIsOPSender;
    BOOL mIsSendingPanel;
    BOOL mDoesMultipleTransfers;
    IOBluetoothTransferProgressUI *mTransferProgress;
    unsigned int mFirstPacketSize;
    unsigned short mMaxPacketLength;
    BOOL mIsFirstPutPacket;
    BOOL mUserAborted;
    BOOL mErrorDialogIsUp;
    int mPanelRunState;
    NSString *mWindowTitle;
    struct _NSModalSession { } *mModalSession;
    NSTimer *mAbortTimer;
    NSPanel *mTimeoutSheet;
}

@property (retain) IOBluetoothDevice *device;

+ (BOOL)targetSupportsReceivingFiles:(id)a0 viaOPP:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)runModal;
- (void)setTitle:(id)a0;
- (void)stop;
- (void)awakeFromNib;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (void)fileTransferServicesAbortComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesConnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesDisconnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesFilePreparationComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesSendFileComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesSendFileProgress:(id)a0 transferProgress:(id)a1;
- (id)getDevice;
- (id)getTitle;
- (void)setIconForType:(unsigned int)a0;
- (void)abortTimerFired:(id)a0;
- (void)adjustUIForTransferOperationConclusionWithError:(int)a0;
- (void)adjustUIForTransferOperationTimeOutError:(id)a0;
- (void)cancelAbortTimer;
- (int)closeOBEXConnection;
- (void)closePanel;
- (void)closeUpShop;
- (void)createFileRefsForPaths:(id)a0;
- (id)currentFile;
- (void)errorPanelButtonClick:(id)a0;
- (id)initObjectPushWithBluetoothDevice:(id)a0 withFiles:(id)a1 delegate:(id)a2;
- (BOOL)isTransferInProgress;
- (id)locString:(id)a0;
- (id)newModuleForFiles:(id)a0 isFirstRun:(BOOL)a1;
- (int)openOBEXConnection;
- (void)retrySheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)runPanel;
- (int)sendFileToRemoteDevice;
- (void)setIconForCurrentFile;
- (void)setIconImage:(id)a0;
- (void)stopTransfer:(id)a0;
- (void)timeoutSheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (BOOL)validateFiles;

@end
