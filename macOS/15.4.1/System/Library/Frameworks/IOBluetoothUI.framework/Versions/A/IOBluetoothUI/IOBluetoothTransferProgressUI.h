@class NSTextField, NSString, NSMutableDictionary, NSProgressIndicator;

@interface IOBluetoothTransferProgressUI : IOBluetoothTransferProgress {
    NSProgressIndicator *mProgressIndicator;
    NSTextField *mStatusField;
    NSTextField *mBytesTransferredField;
    NSTextField *mTimeRemainingField;
    NSTextField *mTimeRemainingFieldLabel;
    NSTextField *mFileNameField;
    NSString *mDeviceName;
    NSString *mFileName;
    BOOL mUsesFileNameField;
    int mTransferType;
    NSMutableDictionary *mWindowFrames;
}

- (id)init;
- (void).cxx_destruct;
- (void)setProgressIndicator:(id)a0;
- (void)setStatusString:(id)a0;
- (void)updateUI;
- (void)setDeviceName:(id)a0;
- (void)setTransferState:(int)a0;
- (void)setTimeString:(id)a0;
- (void)setBytesString:(id)a0;
- (void)setStatusField:(id)a0;
- (id)getByteSizeString:(unsigned int)a0;
- (id)getBytesTransferredAsString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSavedWindowFrameForTextField:(id)a0;
- (id)initWithTotalBytes:(unsigned int)a0 progressIndicator:(id)a1;
- (id)locString:(id)a0;
- (void)resizeWindowWithTextField:(id)a0;
- (void)saveWindowFrameWithTextField:(id)a0;
- (void)setBytesStringKey:(id)a0;
- (void)setFileNameField:(id)a0;
- (void)setFileNameString:(id)a0;
- (void)setIndeterminateState:(BOOL)a0;
- (void)setStatusStringKey:(id)a0;
- (void)setTimeRemainingField:(id)a0;
- (void)setTimeRemainingFieldLabel:(id)a0;
- (void)setTimeStringKey:(id)a0;
- (void)setTransferFileName:(id)a0;
- (void)setTransferType:(int)a0;
- (void)setTransferedBytesField:(id)a0;

@end
