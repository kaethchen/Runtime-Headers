@interface CHFastPathCharacterPersonalizerInterface : NSObject {
    struct CHFastPathCharacterPersonalizerWithPrefixForStyleInventory { struct shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterPersonalizer> { struct CHAbstractFastPathCharacterPersonalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _fastPathCharacterPersonalizer; } _fastPathCharacterPersonalizer;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithStyleInventory:(id)a0 characterSet:(id)a1;
- (void)runPersonalizationWithBlock:(id /* block */)a0 resynthesizeAll:(BOOL)a1;

@end
