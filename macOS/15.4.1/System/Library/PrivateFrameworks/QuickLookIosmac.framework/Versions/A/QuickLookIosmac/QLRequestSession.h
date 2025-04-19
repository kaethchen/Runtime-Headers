@class NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_source, QLDataGenerationHandler;

@interface QLRequestSession : NSObject {
    const void *_documentObject;
}

@property BOOL isValid;
@property (retain) id mangledID;
@property struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *request;
@property (readonly) struct { long long version; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; } callbacks;
@property unsigned int reply_port;
@property (readonly) NSUUID *uuid;
@property (retain) NSObject<OS_dispatch_source> *portDeathSource;
@property (retain) id<QLDataGenerationHandler> dataHandler;
@property (retain) NSMutableArray *storedData;
@property BOOL keepAlive;

+ (BOOL)setupSession:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
+ (void)unsetupSession:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
+ (void)_updateCrashReportMessage;
+ (void)disableInstantOff;
+ (void)discardAllSessions:(BOOL)a0;
+ (void)enableInstantOff;
+ (id)getSessionAndNotifyPortDeathWithPort:(unsigned int)a0;
+ (id)getSessionFromReplyPort:(unsigned int)a0;
+ (BOOL)isInstantOffEnabled;
+ (unsigned long long)sessionCount;
+ (id)sessionFromUUID:(id)a0;
+ (void)setupCrashReportMessageForRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
+ (void)setupSessions:(BOOL)a0 deadPortBlock:(id /* block */)a1;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleGetData:(id)a0;
- (void)handleSendDataWithAttachmentURL:(id)a0 lastChunk:(BOOL)a1;
- (void)handleStartAttachment:(id)a0 mimeType:(id)a1 encoding:(id)a2;
- (id)initWithReplyPort:(unsigned int)a0 uuid:(id)a1;
- (void)setDocumentObject:(const void *)a0 callbacks:(const struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;

@end
