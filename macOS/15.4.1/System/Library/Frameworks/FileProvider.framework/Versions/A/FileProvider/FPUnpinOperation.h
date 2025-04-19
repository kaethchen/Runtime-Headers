@class NSArray;

@interface FPUnpinOperation : FPActionOperation {
    NSArray *_items;
}

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;

@end
