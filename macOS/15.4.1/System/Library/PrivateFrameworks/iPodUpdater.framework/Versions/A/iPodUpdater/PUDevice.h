@class NSString, NSThread;
@protocol UpdaterToolRequests;

@interface PUDevice : NSObject {
    unsigned int _service;
    NSString *_devName;
    NSString *_fullDevicePath;
    unsigned long long _diskSize;
    unsigned short _blockSize;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_stdioFile;
    id<UpdaterToolRequests> _serverProxy;
    NSThread *_threadForProxy;
    int _mode;
}

+ (id)launchPath;
+ (BOOL)needsAuthentication;
+ (int)launchBackEnd;
+ (int)obtainBackEndAuthorization:(BOOL)a0;
+ (id)proxyConnectionForBackendTool;
+ (void)quitBackEnd;

- (void)dealloc;
- (int)close;
- (int)open;
- (void)setMode:(int)a0;
- (int)fileDescriptor;
- (void)setFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (int)tickle;
- (unsigned short)blockSize;
- (short)revisionLevel;
- (unsigned long long)diskSize;
- (unsigned int)getService;
- (id)devName;
- (void)doneWithBackend;
- (int)write:(id)a0 atOffset:(unsigned long long)a1;
- (int)clearOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (int)connectToBackEnd;
- (int)format:(int)a0 family:(unsigned int)a1;
- (int)formatSlice:(int)a0 withFormat:(int)a1 family:(unsigned int)a2;
- (BOOL)hasFileHandle;
- (int)indicateDeviceWillBecomeUnmountable;
- (id)initWithService:(unsigned int)a0 name:(id)a1 size:(unsigned long long)a2 blockSize:(unsigned short)a3;
- (BOOL)isConnectedViaUSB;
- (int)readFromOffset:(unsigned long long)a0 intoBuffer:(out id *)a1 length:(unsigned long long)a2;
- (int)startBackEnd;
- (short)volumeRefNum;
- (int)writeBytes:(const void *)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2;

@end
