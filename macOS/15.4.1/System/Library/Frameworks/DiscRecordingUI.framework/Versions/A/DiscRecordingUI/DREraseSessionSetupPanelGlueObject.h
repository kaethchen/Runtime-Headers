@class NSString, NSWindow;

@interface DREraseSessionSetupPanelGlueObject : NSObject <NSWindowDelegate> {
    struct DREraseSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRErase *x7; void *x8; void *x9; } *_session;
    struct DREraseSessionSetupCallbacks { unsigned int version; void /* function */ *deviceShouldBeTarget; void /* function */ *containsSuitableMedia; void /* function */ *deviceSelectionChanged; } _callbacks;
    NSWindow *_parentWindow;
    BOOL _delegateHandlesReservations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setParentWindow:(id)a0;
- (id)initWithSession:(struct DREraseSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRErase *x7; void *x8; void *x9; } *)a0;
- (void)setCallbacks:(struct DREraseSessionSetupCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *)a0;
- (BOOL)setupPanel:(id)a0 deviceCouldBeTarget:(id)a1;
- (int)runSetupPanelWithOptions:(struct DREraseSessionSetupDialogOptions { unsigned int x0; unsigned int x1; } *)a0;
- (BOOL)setupPanel:(id)a0 deviceContainsSuitableMedia:(id)a1 promptString:(id *)a2;
- (void)setupPanelDeviceSelectionChanged:(id)a0;
- (BOOL)setupPanelShouldHandleMediaReservations:(id)a0;

@end
