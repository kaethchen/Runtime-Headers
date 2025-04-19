@class NSString, NSWindow;

@interface DRBurnSessionProgressPanelGlueObject : NSObject <NSWindowDelegate> {
    struct DRBurnSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRBurn *x7; void *x8; void *x9; } *_session;
    struct DRBurnSessionProgressCallbacks { unsigned int version; void /* function */ *progressWillBegin; void /* function */ *progressDidFinish; void /* function */ *burnDidFinish; } _callbacks;
    NSWindow *_parentWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setParentWindow:(id)a0;
- (id)initWithSession:(struct DRBurnSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRBurn *x7; void *x8; void *x9; } *)a0;
- (void)setCallbacks:(struct DRBurnSessionProgressCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *)a0;
- (void)beginPanelForLayout:(void *)a0 options:(struct DRBurnSessionProgressDialogOptions { unsigned int x0; unsigned int x1; struct __CFString *x2; } *)a1;
- (BOOL)burnProgressPanel:(id)a0 burnDidFinish:(id)a1;
- (void)burnProgressPanelDidFinish:(id)a0;
- (void)burnProgressPanelWillBegin:(id)a0;

@end
