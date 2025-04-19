@class NSString, CUVoiceRequest, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject {
    CUVoiceRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    NSMutableArray *_requests;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSMutableArray *_voiceRequests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)stopSpeaking;
- (void)_invalidated;
- (void)_completeAllRequestsWithError:(id)a0;
- (void)_completeRequest:(id)a0 error:(id)a1;
- (void)_speakText:(id)a0 flags:(unsigned int)a1 volume:(double)a2 completion:(id /* block */)a3;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)speakText:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)speakText:(id)a0 flags:(unsigned int)a1 volume:(double)a2 completionHandler:(id /* block */)a3;

@end
