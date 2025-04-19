@class NSPersistentUIKeyedUnarchiver, NSString, NSDictionary, NSData, NSWindowRestorationOptions, NSMutableDictionary, NSWindow;

@interface NSPersistentUIWindowRestoration : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_persistentIDToRecord;
    NSPersistentUIKeyedUnarchiver *_windowCoder;
    BOOL _talagentWindowTransferredOwnership;
    BOOL _restoredWindowPinned;
    BOOL _finishedRestoring;
}

@property (readonly) unsigned int windowID;
@property (copy) NSDictionary *talagentWindowDictionary;
@property (readonly) NSWindow *restoredWindow;
@property (retain) NSData *lastMinuteWindowData;
@property (readonly, copy) NSWindowRestorationOptions *options;
@property (readonly) BOOL requiresSecureCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bulkDisposeTalagentWindowsIfUnused:(id)a0 withFade:(BOOL)a1;

- (void).cxx_destruct;
- (unsigned int)acquireTalagentWindow;
- (void)closeWindowCoder;
- (void)disposeTalagentWindowIfUnused;
- (void)finishRestoringWithWindow:(id)a0;
- (id)initWithWindowID:(unsigned int)a0 requireSecureCoding:(BOOL)a1 options:(id)a2;
- (BOOL)isFinishedRestoring;
- (BOOL)isGlobal;
- (void)pinRestoredWindowToTalagentWindow;
- (id)recordForPersistentID:(id)a0;
- (void)setRecord:(id)a0 forPersistentID:(id)a1;
- (unsigned int)talagentWindow;
- (void)unpinRestoredWindowFromTalagentWindow;
- (id)windowCoder;

@end
