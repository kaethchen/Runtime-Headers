@protocol SearchUIButtonItemGeneratorViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIButtonItemGenerator : NSObject

@property (weak) id<SearchUIButtonItemGeneratorViewDelegate> delegate;
@property (weak) id<SearchUIFeedbackDelegate> feedbackDelegate;

+ (BOOL)mayRequireAsyncGenerationForButtonItem:(id)a0;

- (void).cxx_destruct;
- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)a0 completion:(id /* block */)a1;

@end
