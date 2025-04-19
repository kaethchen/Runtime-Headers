@class NSArray, NSHashTable;

@interface VUIModalPresenter : NSObject {
    NSHashTable *__presentationControllers;
}

@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_presentationControllers;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentViewController:(id)a0 fromViewController:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
