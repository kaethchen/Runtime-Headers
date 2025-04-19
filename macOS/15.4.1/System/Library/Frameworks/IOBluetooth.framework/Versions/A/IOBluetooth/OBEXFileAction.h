@class NSString, NSTimer, IOBluetoothTransferProgress, NSData, BluetoothFileReference, IOBluetoothOBEXSession;

@interface OBEXFileAction : NSObject <TransferModuleInterface> {
    BluetoothFileReference *mFileRef;
    IOBluetoothTransferProgress *mTransferProgress;
    unsigned int mOptions;
    BOOL mTargetIsAMac;
    NSString *mActionArgument;
    NSString *mCurrentRemoteDirectory;
    BOOL mActionInProgress;
    BOOL mWeOpenedTheOBEXConnection;
    NSData *mUserDefinedHeaderData;
    SEL mEventSelector;
    id mSelectorTarget;
    BOOL mAbortedByOwner;
    BOOL mWeAreAborting;
    int mInactivityThreshold;
    NSTimer *mInactivityTimer;
    IOBluetoothOBEXSession *mOBEXSession;
    unsigned short mMaxPacketLength;
    struct __CFData { } *mHeadersDataRef;
    unsigned int mConnectionID;
    BOOL mUseConnectionID;
    unsigned int mArchiveOptions;
    unsigned long long mDataSentSoFar;
    NSData *mTempDataBuffer;
    int mError;
    BOOL mSubclassIsGet;
    int mCountHeader;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void).cxx_destruct;
- (int)disconnect;
- (int)connect;
- (BOOL)isBusy;
- (BOOL)isConnected;
- (void)setConnectionID:(unsigned int)a0;
- (void)OBEXGetHandler:(struct OBEXGetCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)setOBEXSession:(id)a0;
- (void)OBEXPutHandler:(struct OBEXPutCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)OBEXAbortHandler:(struct OBEXAbortCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)OBEXConnectHandler:(struct OBEXConnectCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; unsigned short x3; unsigned char x4; unsigned char x5; } *)a0;
- (void)OBEXDisconnectHandler:(struct OBEXDisconnectCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)SessionResponseCallback:(id)a0;
- (int)abortAction:(id)a0;
- (void)addUserDefinedOBEXHeader:(id)a0;
- (int)connectWithTargetHeader:(const void *)a0 targetHeaderLength:(unsigned int)a1;
- (id)currentRemoteDirectory;
- (void)finalizeActionAsync:(id)a0;
- (void)finalizeActionWithError:(int)a0;
- (int)getRemoteFileNamed:(id)a0 toLocalPathAndName:(id)a1;
- (void)inactivityTimerFired:(id)a0;
- (void)initForNewAction;
- (void)initiateAction;
- (void)notifySelectorOfProgress:(int)a0;
- (int)putFileToRemote:(id)a0;
- (void)setActionArgument:(id)a0;
- (void)setActionInProgress:(BOOL)a0;
- (void)setEventTarget:(id)a0 andSelector:(SEL)a1;
- (void)setSubclassIsGet:(BOOL)a0;
- (void)startCommand;

@end
