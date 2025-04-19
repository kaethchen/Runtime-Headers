@class NSString, NSWindow;

@interface DREraseSessionProgressPanelGlueObject : NSObject <NSWindowDelegate> {
    struct DREraseSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRErase *x7; void *x8; void *x9; } *_session;
    struct DREraseSessionProgressCallbacks { unsigned int version; void /* function */ *progressWillBegin; void /* function */ *progressDidFinish; void /* function */ *eraseDidFinish; } _callbacks;
    NSWindow *_parentWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setParentWindow:(id)a0;
- (id)initWithSession:(struct DREraseSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRErase *x7; void *x8; void *x9; } *)a0;
- (void)setCallbacks:(struct DREraseSessionProgressCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *)a0;
- (void)beginPanelWithOptions:(struct DREraseSessionProgressDialogOptions { unsigned int x0; unsigned int x1; struct __CFString *x2; } *)a0;
- (BOOL)eraseProgressPanel:(id)a0 eraseDidFinish:(id)a1;
- (void)eraseProgressPanelDidFinish:(id)a0;
- (void)eraseProgressPanelWillBegin:(id)a0;

@end
