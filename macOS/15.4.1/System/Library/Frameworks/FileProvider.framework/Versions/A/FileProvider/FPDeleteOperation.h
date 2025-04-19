@class NSArray;

@interface FPDeleteOperation : FPActionOperation {
    NSArray *_items;
}

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;

@end
