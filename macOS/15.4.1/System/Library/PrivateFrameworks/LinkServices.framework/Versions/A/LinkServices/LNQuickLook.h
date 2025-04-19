@class NSArray, NSMutableDictionary;

@interface LNQuickLook : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableDictionary *editedPreviewItems;
@property (nonatomic) long long editingMode;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)finishWithError:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)presentOverViewController:(id)a0 completionHandler:(id /* block */)a1;

@end
