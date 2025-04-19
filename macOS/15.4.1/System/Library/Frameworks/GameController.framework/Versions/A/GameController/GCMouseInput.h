@class GCDeviceCursor, NSString, NSArray, NSObject, _GCDevicePhysicalInput, NSMutableArray, GCControllerButtonInput;
@protocol OS_dispatch_queue;

@interface GCMouseInput : GCPhysicalInputProfile <_GCButtonEventSink, _GCScrollEventSink, _GCDigitizerEventSink, _GCPointerEventSink, _GCDevicePhysicalInputDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _eventBufferLock;
    NSMutableArray *_eventBuffer;
    unsigned long long _eventBufferDepth;
    id _buttonEventObservation;
    id _scrollEventObservation;
    id _digitizerEventObservation;
    id _pointerEventObservation;
    long long _buttons;
    NSObject<OS_dispatch_queue> *_physicalInputQueue;
    _GCDevicePhysicalInput *_liveInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ mouseMovedHandlerPrivate;
@property (copy, nonatomic) id /* block */ mouseButtonPressedPrivate;
@property (copy, nonatomic) id /* block */ mouseMovedHandler;
@property (readonly, nonatomic) GCDeviceCursor *scroll;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightButton;
@property (readonly, nonatomic) GCControllerButtonInput *middleButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_drainBufferedEvents:(id)a0 latestOnly:(BOOL)a1;
- (void)_handleButtonEventType:(unsigned long long)a0 buttonMask:(unsigned long long)a1;
- (void)handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)handleMouseButtonEventAddingButtonMask:(unsigned long long)a0;
- (void)handleMouseButtonEventRemovingButtonMask:(unsigned long long)a0;
- (void)handleMouseButtonEventSettingButtonMask:(unsigned long long)a0;
- (void)handleMouseMovementEventWithDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)handleScrollEventWithDelta:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithIdentifier:(id)a0 additionalButtons:(unsigned int)a1;
- (void)physicalInput:(id)a0 setQueue:(id)a1;
- (void)physicalInputPoll:(id)a0 forLatest:(BOOL)a1;
- (id)physicalInputQueue:(id)a0;
- (void)physicalInputTransactionQueueDepthDidChange:(id)a0;
- (id)physicalInputWithAttributes:(id)a0;
- (void)setButtonEventSource:(id)a0;
- (void)setDigitizerEventSource:(id)a0;
- (void)setPointerEventSource:(id)a0;
- (void)setScrollEventSource:(id)a0;

@end
