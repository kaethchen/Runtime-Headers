@class NSArray, NSString;

@interface TabSearchFilterOperation : NSOperation

@property (copy, nonatomic) NSArray *tabInfo;
@property (readonly, copy, nonatomic) id /* block */ filterCompletionCallback;
@property (readonly, nonatomic) NSString *filterText;

- (void).cxx_destruct;
- (void)main;
- (void)_completeOperationWithIndexes:(id)a0;
- (id)initWithTabInfoForFilteringTabs:(id)a0 filterText:(id)a1 completionCallback:(id /* block */)a2;

@end
