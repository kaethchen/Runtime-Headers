@class NSMutableArray, NSBox, NSMutableDictionary, NSPanel, NSTableView, NSButton, NSTextView;

@interface DSM : NSObject {
    NSPanel *_panel;
    NSTableView *_tableView;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSTextView *_moreInfo;
    NSBox *_box;
    NSMutableDictionary *_dataSources;
    int _dataSourceIndex;
    NSMutableArray *_icaInfo;
    struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *_source;
    struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *_destination;
    unsigned int _dataGroup;
    unsigned short _dataArgumentType;
    unsigned short _messageID;
    char *_dataPtr;
    struct CallBackInfo { struct TW_IDENTITY { char *Id; struct TW_VERSION { unsigned short MajorNum; unsigned short MinorNum; unsigned short Language; unsigned short Country; unsigned char Info[34]; } Version; unsigned short ProtocolMajor; unsigned short ProtocolMinor; unsigned int SupportedGroups; unsigned char Manufacturer[34]; unsigned char ProductFamily[34]; unsigned char ProductName[34]; } client; struct TW_IDENTITY *clientPtr; struct TW_CALLBACK { char *CallBackProc; char *RefCon; short Message; } callback; unsigned char got_MSG_PROCESSEVENT; unsigned short pendingCallback; } _callbackInfo;
    short _conditionCode;
    int _dsmState;
    BOOL _insideFlag;
}

- (void)dealloc;
- (id)init;
- (unsigned short)parent;
- (unsigned short)status;
- (unsigned short)identity;
- (unsigned short)callback;
- (void)cancel:(id)a0;
- (unsigned long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(unsigned long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)select:(id)a0;
- (unsigned short)getNext;
- (unsigned short)entry:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0 destination:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a1 dataGroup:(unsigned int)a2 dataArgumentType:(unsigned short)a3 messageID:(unsigned short)a4 dataPtr:(char *)a5;
- (short)closeDS;
- (unsigned short)entryDS;
- (unsigned short)openDSM;
- (void)buildDataSourceArray;
- (unsigned short)closeDSM;
- (void)doCallback:(id)a0;
- (short)getDefault;
- (unsigned short)getFirst;
- (short)getMatchingDefault:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0;
- (unsigned short)getNextSupported;
- (void)loadICAInfo;
- (short)openDS;
- (unsigned short)processMessage;
- (void)saveICAInfo;
- (short)selectDS;
- (void)switchToTWAIN:(id)a0;
- (BOOL)validateDS:(id)a0;

@end
