@interface _NSDocumentLifecycleHelper : NSObject {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ customConfirmationDialogSettings;
}

+ (unsigned long long)registerNotifier:(id /* block */)a0;
+ (void)unregisterNotifier:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)presentCloseConfirmationForNewDocument:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)presentCustomSaveConfirmationShowingDeleteButton:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setCustomConfirmationDialogSettings:(id)a0;

@end
