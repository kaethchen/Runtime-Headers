@class PXSModule, PXSettings;

@interface PXSDrillDownRow : PXSRow {
    PXSettings *_childSettings;
    PXSModule *_childModule;
    BOOL _isPrepared;
}

+ (id)rowWithTitle:(id)a0 childSettingsKeyPath:(id)a1;
+ (id)rowWithTitle:(id)a0 childSettings:(id)a1;

- (void).cxx_destruct;
- (id)children;
- (void)prepare;
- (id)valueViewReuseIdentifier;

@end
