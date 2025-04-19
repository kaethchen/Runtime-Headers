@class AVPlayerVideoOutputConfiguration, AVVideoOutputSpecification, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface AVPlayerVideoOutput : NSObject {
    struct { NSObject<OS_dispatch_queue> *stateQueue; AVPlayer *weakPlayer; struct OpaqueFigVideoTarget *videoTarget; struct OpaqueFigVideoReceiver *videoReceiver; struct OpaqueCMTaggedBufferGroup *lastSeenTaggedBufferGroup; AVPlayerVideoOutputConfiguration *activeConfiguration; } _receiverState;
    NSObject<OS_dispatch_queue> *_iVarAccessQueue;
    AVVideoOutputSpecification *_outputSpecification;
    id /* block */ _resourceLifeCycleHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0;
- (BOOL)_attachToPlayer:(id)a0 exceptionReason:(id *)a1;
- (struct OpaqueCMTaggedBufferGroup { } *)_copyTaggedBufferGroupForHostTimeInternal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 doNotConsume:(BOOL)a1 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 activeConfiguration:(id *)a3 lastSeenTaggedBufferGroup:(struct OpaqueCMTaggedBufferGroup **)a4;
- (int)_createAndConfigureVideoReceiverIfNecessaryOnStateQueue;
- (void)_detachFromPlayer:(id)a0;
- (void)_handleVideoReceiverActiveConfigurationChanged:(struct FigVideoReceiverConfigurationInfo { struct __CFString *x0; struct __CFArray *x1; struct __CFDictionary *x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; })a0;
- (id)_playerItemWithIdentifier:(id)a0;
- (void)_setResourceLifeCycleHandler:(id /* block */)a0;
- (int)_setUpVideoReceiverEventHandlers:(struct OpaqueFigVideoReceiver { } *)a0;
- (BOOL)_setupWithOutputSpecification:(id)a0 exceptionReasonOut:(id *)a1;
- (id)attachedPlayer;
- (struct OpaqueCMTaggedBufferGroup { } *)copyTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 activeConfiguration:(id *)a2;
- (BOOL)hasNewTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id /* block */)resourceLifeCycleHandler;

@end
