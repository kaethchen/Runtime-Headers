@class NSUndoManager;
@protocol PXSuggestLessPeopleHelperDelegate;

@interface PXSuggestLessPeopleHelper : NSObject

@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (weak, nonatomic) id<PXSuggestLessPeopleHelperDelegate> delegate;

+ (BOOL)canPerformOnAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (void)_showSuggestLessOptionForPerson:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showSuggestLessPeopleSelectionForPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)_suggestLessPeople:(id)a0 withSuggestLessOption:(long long)a1 undoManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)suggestLessPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeopleFromAssets:(id)a0 completionHandler:(id /* block */)a1;

@end
