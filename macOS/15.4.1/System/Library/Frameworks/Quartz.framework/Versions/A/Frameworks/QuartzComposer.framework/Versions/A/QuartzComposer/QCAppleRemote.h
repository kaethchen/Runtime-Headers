@class QCBooleanPort;

@interface QCAppleRemote : QCRunLoopPatch {
    QCBooleanPort *outputAvailable;
    QCBooleanPort *outputUpSignal;
    QCBooleanPort *outputDownSignal;
    QCBooleanPort *outputPreviousSignal;
    QCBooleanPort *outputNextSignal;
    QCBooleanPort *outputPlaySignal;
    QCBooleanPort *outputMenuSignal;
    QCBooleanPort *outputSelectSignal;
    BOOL _exclusive;
    void *_hidDeviceInterface;
    void *_queueInterface;
    struct __CFRunLoopSource { } *_hidEventSource;
    struct __CFDictionary { } *_cookies;
    unsigned char _buttonsState;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)_cleanUp;
- (void)_setUp;
- (BOOL)setup:(id)a0;
- (BOOL)exclusiveAccess;
- (void)_processEvents;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setExclusiveAccess:(BOOL)a0;

@end
