@class NSArray;

@interface FPTransformOperation : FPActionOperation

@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ transformCompletionBlock;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)finalItemsForStitcherForResult:(id)a0;
- (void)actionMain;
- (id)fp_prettyDescription;
- (id)initWithItemsOfDifferentProviders:(id)a0 action:(id)a1;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (void)presendNotifications;
- (void)signalReindexItemsIfNeededForErrorsByItem:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
