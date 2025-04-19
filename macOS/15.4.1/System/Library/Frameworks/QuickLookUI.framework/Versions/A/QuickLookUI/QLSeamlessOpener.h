@class NSWindow, NSArray, NSAppleEventDescriptor, NSURL, NSString, QLSeamlessOpenerReserved, NSImage;
@protocol QLSeamlessOpenerDelegate, QLSeamlessCloserDelegate;

@interface QLSeamlessOpener : NSObject {
    QLSeamlessOpenerReserved *_reserved;
    struct LSApplicationParameters_V1 { long long version; unsigned int flags; struct FSRef *application; void *asyncLaunchRefCon; struct __CFDictionary *environment; struct __CFArray *argv; struct AEDesc *initialEvent; struct __CFArray *architectures; struct __CFURL *applicationURL; struct ProcessSerialNumber *applicationPSN; } _parameters;
    NSImage *_transientImage;
    NSWindow *_transientWindow;
    long long _transientRetainCount;
    BOOL _transientShouldAnimate;
}

@property (weak) id<QLSeamlessOpenerDelegate> delegate;
@property (weak) id<QLSeamlessCloserDelegate> closerDelegate;
@property unsigned int launchFlags;
@property (copy) NSAppleEventDescriptor *additionalEventParamDescriptor;
@property (copy) NSURL *applicationURL;
@property (copy) NSArray *additionalAnimatingItems;
@property (copy) NSString *searchString;
@property const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *passThruParams;

+ (void)initialize;
+ (id)seamlessOpenerWithDelegate:(id)a0;
+ (void)invalidateCloserDelegate:(id)a0;
+ (void)_enableScreenUpdates;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)openLocalItems:(id)a0 realApplicationPID:(int)a1;
- (void)openItems:(id)a0;
- (void)openLocalItems:(id)a0;
- (void)_addLaunchFlagsToLSOptions:(id)a0;
- (void)_checkToCloseTransientWindowWithAnimation:(BOOL)a0;
- (void)_closeTransientWindowWithAnimation:(BOOL)a0;
- (void)_displayTransientWindowWithTransientImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 level:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForWID:(unsigned int)a0;
- (id)_itemOpenersByAppURL:(id)a0 preferredApplicationURL:(id)a1 error:(id *)a2;
- (int)_openItems:(id)a0 async:(BOOL)a1 local:(BOOL)a2 realAppPID:(int)a3 options:(id)a4;
- (void)beginShowingTransientWindow;
- (void)endShowingTransientWindowShouldAnimate:(BOOL)a0;
- (void)openItems:(id)a0 withOptions:(id)a1;
- (int)openItemsSynchronously:(id)a0;

@end
