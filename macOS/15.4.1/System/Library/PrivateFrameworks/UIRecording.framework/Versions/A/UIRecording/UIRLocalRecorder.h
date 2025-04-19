@class UIRAccessibilityProcess, NSArray, UIRAccessibilityElement, NSTimer, UIRTDrawFocus, NSMutableDictionary, UIRRecord;

@interface UIRLocalRecorder : NSObject {
    struct CGPoint { double x; double y; } _lastMousePoint;
    UIRAccessibilityElement *_systemWideElement;
    UIRAccessibilityProcess *_targetApplicationElement;
    UIRAccessibilityElement *_currentUIElement;
    struct __CFMachPort { } *_eventTapPort;
    UIRTDrawFocus *_drawFocus;
    UIRRecord *_currentRecord;
    NSTimer *_uiElementUpdateTimer;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _processSerialNumber;
    id _delegate;
    NSArray *_excludedProccesses;
    NSMutableDictionary *_processesByPSN;
    BOOL _doDrawFocus;
    struct __UIRLocalRecorderDelegateRespondsTo { unsigned char uirLocalRecorder_willRecordEvent : 1; unsigned char uirLocalRecorder_didRecordEvent : 1; unsigned char uirLocalRecorder_didStopRecording : 1; unsigned char uirLocalRecorder_didStartRecording : 1; unsigned int reserved : 28; } _delegateRespondsTo;
}

@property BOOL isRecording;
@property unsigned long long eventMask;
@property (readonly) UIRAccessibilityElement *currentUIElement;
@property id delegate;
@property (retain) UIRRecord *currentRecord;

- (void)dealloc;
- (id)init;
- (void)stopRecording;
- (id)systemWideElement;
- (void)setSystemWideElement:(id)a0;
- (struct __CGEvent { } *)_eventTapProxyCallback:(struct __CGEventTapProxy { } *)a0 withEventType:(unsigned int)a1 withEvent:(struct __CGEvent { } *)a2;
- (id)_processWithPSN:(long long)a0;
- (void)_recordEventsOnPrivateThread;
- (id)_uiElementForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct __UIRLocalRecorderDelegateRespondsTo { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 28; })delegateRespondsTo;
- (id)drawFocus;
- (struct __CFMachPort { } *)eventTapPort;
- (id)excludedProccesses;
- (void)performTimerBasedUIElementUpdate;
- (id)processesByPSN;
- (void)setCurrentUIElement:(id)a0;
- (void)setDrawFocus:(id)a0;
- (void)setEventTapPort:(struct __CFMachPort { } *)a0;
- (void)setExcludedProccesses:(id)a0;
- (void)setProcessesByPSN:(id)a0;
- (void)setTargetApplicationElement:(id)a0;
- (void)setUIElementUpdateTimer:(id)a0;
- (void)startRecordingEvents:(unsigned long long)a0;
- (void)startRecordingEvents:(unsigned long long)a0 excludingProcesses:(id)a1;
- (void)startRecordingEvents:(unsigned long long)a0 forPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
- (id)targetApplicationElement;
- (id)uiElementUpdateTimer;
- (void)updateCurrentUIElement;
- (void)updateCurrentUIElementWithEvent:(struct __CGEvent { } *)a0;

@end
