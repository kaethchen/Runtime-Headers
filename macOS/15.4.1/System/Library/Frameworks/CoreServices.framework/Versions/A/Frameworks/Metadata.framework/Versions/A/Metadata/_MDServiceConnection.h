@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _MDServiceConnection : NSObject {
    struct __CFString { } *_name;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFDictionary { } *_bindings;
    struct __CFDictionary { } *_msgLists;
    struct __CFDictionary { } *_recvLists;
    BOOL _didSendGreeting;
    unsigned long long _timeConnect;
    unsigned long long _timeDown;
    unsigned long long _timeUp;
    NSObject<OS_xpc_object> *_unconnectError;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_logFile;
}

- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)initWithName:(struct __CFString { } *)a0;
- (void)connect;
- (BOOL)isConnected;
- (void)appendProfilesToTuningMsgs:(id)a0;
- (void)appendStartChannelUUID:(struct __CFUUID { } *)a0 withProfiles:(struct __CFArray { } *)a1 toTuningMsgs:(id)a2;
- (void)send:(id)a0;
- (void)sendGreeting;
- (void)unconnect:(id)a0;
- (void)unpackEnv:(id)a0;

@end
