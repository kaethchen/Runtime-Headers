@class PXSModuleController, NSString;

@interface PXSSettingsController : NSWindowController <PXSettingsKeyPathObserver, NSWindowDelegate>

@property (readonly, nonatomic) PXSModuleController *rootModuleController;
@property (nonatomic) BOOL willSave;
@property (copy, nonatomic) id /* block */ onWindowDidClose;
@property (nonatomic) BOOL hasWarnedForOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)_save;
- (void)_clearSettingsOverride;
- (void)_warnForSettingsOverride;
- (id)initWithRootModuleController:(id)a0;
- (id)initWithRootSettings:(id)a0;

@end
