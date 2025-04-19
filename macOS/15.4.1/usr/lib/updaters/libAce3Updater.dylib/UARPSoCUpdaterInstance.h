@class NSString, NSDictionary, SoCUpdaterHelper, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UARPSoCUpdaterInstance : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isDone;
    NSObject<OS_dispatch_semaphore> *_initUARPSemaphore;
    NSObject<OS_dispatch_semaphore> *_assetTransferUARPSemaphore;
    NSObject<OS_dispatch_semaphore> *_applyAssetUARPSemaphore;
    void *_uarpContext;
    void *_pAssetContext;
    struct _uarpRestoreEndpoint { struct uarpRestoreLayer3Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } x0; struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; unsigned char x11; } x1; struct uarpPlatformEndpointCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; } x2; struct uarpPlatformEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; unsigned char x11; } x0; void *x1; struct uarpPlatformEndpointCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; } x2; void *x3; int x4; unsigned int x5; struct uarpPlatformRemoteEndpoint **x6; struct uarpPlatformAsset *x7; int x8; unsigned char x9; int x10; void /* function */ *x11; unsigned short x12; } x3; struct uarpPlatformEndpointApple { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct uarpPlatformEndpointAppleCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; } x4; } x4; struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; unsigned char x11; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned short x8; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x9; struct UARP4ccTag *x10; struct uarpPlatformStreamingBuffer *x11; unsigned short x12; struct uarpPlatformTransmitBufferEntry **x13; unsigned short x14; struct uarpPlatformTransmitBufferEntry **x15; struct uarpPlatformTransmitBufferEntry *x16; unsigned short x17; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x18; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x19; struct uarpPlatformRemoteEndpoint *x20; } x5; struct _uarpRestoreAsset *x6; struct _uarpRestoreAsset *x7; void *x8; unsigned char x9; unsigned short x10; char *x11; char *x12; char *x13; char *x14; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x15; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x16; id x17; id x18; char *x19; char *x20; char *x21; char *x22; union { unsigned int x0; unsigned long long x1; } x23; unsigned int x24; unsigned int x25; unsigned long long x26; char *x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned int x37; char *x38; unsigned char x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; void *x44; unsigned int x45; char *x46; unsigned int x47; unsigned char x48; unsigned char x49; unsigned char x50; char *x51; unsigned int x52; } *_endpoint;
    NSDictionary *_tssRequest;
    NSString *_tssRequestServerURL;
    NSString *_ticketLongName;
    NSString *_manifestPrefixName;
    BOOL _requiresPersonalization;
    int _logicUnitNumberFromDevice;
    BOOL _prefixNeedsLogicalUnitNumber;
    BOOL _suffixNeedsLogicalUnitNumber;
    unsigned int _nextUpdateProgressReportPercentThreshold;
    NSString *_name;
    unsigned int _lastPercentComplete;
    BOOL _stagingResult;
}

@property (retain) SoCUpdaterHelper *log;
@property (readonly) unsigned char routerID;
@property (readonly) unsigned int logicUnitNumber;
@property (readonly) BOOL useLocalSigning;
@property (readonly) BOOL skipApplyStage;
@property (readonly) BOOL isDone;
@property (readonly) NSDictionary *personalizationRequestDict;
@property (readonly) NSString *ticketName;
@property (readonly) NSString *manifestPrefix;
@property (readonly) NSString *firmwareTagName;
@property unsigned int stagingStatus;
@property unsigned int stagingStatusReason;
@property unsigned int applyFlags;
@property (readonly) BOOL skipSameVersion;
@property (readonly) int updaterMode;

- (id)name;
- (void).cxx_destruct;
- (const char *)namePrefix;
- (void)updateAppleProperty:(unsigned int)a0 siliconCtx:(struct _UARPSiliconContext { id x0; void *x1; void *x2; struct uarpRestoreCallbacks { void /* function */ *x0; void /* function */ *x1; } x3; struct _uarpRestoreEndpoint *x4; void *x5; void *x6; struct uarpRestoreLayer4Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } x7; unsigned int x8; char *x9; char *x10; char *x11; char *x12; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x13; char *x14; char *x15; unsigned long long x16; void *x17; } *)a1;
- (void)applyAssetComplete;
- (BOOL)applyStagedFirmware;
- (void)assetTransferUARPComplete;
- (BOOL)initUARP;
- (void)initUARPComplete;
- (BOOL)initUARPRestoreQueryInfo;
- (BOOL)initUARPWithFirmware:(id)a0;
- (id)initWithHelper:(id)a0 options:(id)a1;
- (id)initWithLogicUnitNumber:(unsigned int)a0 helper:(id)a1 options:(id)a2;
- (id)initWithRouterID:(unsigned char)a0 helper:(id)a1 options:(id)a2;
- (BOOL)offerFirmwareData:(id)a0;
- (BOOL)offerPersonalizationResponse:(id)a0;
- (void)printUpdaterMode;
- (BOOL)receievePersonalizationRequestByOfferFirmwareData:(id)a0;
- (void)stagingCompleteWithStatus:(unsigned int)a0 reason:(unsigned int)a1;
- (void)tssRequestWithOptions:(id)a0 serverURL:(id)a1 assetCtx:(void *)a2 siliconCtx:(struct _UARPSiliconContext { id x0; void *x1; void *x2; struct uarpRestoreCallbacks { void /* function */ *x0; void /* function */ *x1; } x3; struct _uarpRestoreEndpoint *x4; void *x5; void *x6; struct uarpRestoreLayer4Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } x7; unsigned int x8; char *x9; char *x10; char *x11; char *x12; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x13; char *x14; char *x15; unsigned long long x16; void *x17; } *)a3;
- (void *)uarpRestoreInitOptions;
- (struct uarpRestoreLayer4Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } *)uarpRestoreLayer4Callbacks;
- (const char *)uarpRestoreQueueName;
- (void)updateStagingProgressWithBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;

@end
