@class NSDictionary, NSError, AMPlaceholderViewController;

@interface AMPlaceholderAction : AMBundleAction

@property (copy, nonatomic) NSDictionary *actionDictionary;
@property (retain, nonatomic) NSError *loadingError;
@property (retain, nonatomic) AMPlaceholderViewController *_viewController;

+ (id)placeholderActionWithLoadingError:(id)a0 actionDictionary:(id)a1;

- (void).cxx_destruct;
- (id)view;
- (BOOL)isLoaded;
- (void)setWorkflow:(id)a0;
- (id)runWithInput:(id)a0 error:(id *)a1;

@end
