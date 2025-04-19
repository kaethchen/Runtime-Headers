@class ICNAFindResultExposureReporter, ICTextFindingCoordinator, NSString, NSArray;
@protocol ICTextFindingDataSource;

@interface ICMTextViewFinderClient_Asynchronous : NSObject <NSTextFinderClient>

@property (weak, nonatomic) id<ICTextFindingDataSource> dataSource;
@property (retain, nonatomic) ICTextFindingCoordinator *findingCoordinator;
@property (retain, nonatomic) ICNAFindResultExposureReporter *reporter;
@property (readonly, getter=isSelectable) BOOL selectable;
@property (readonly) BOOL allowsMultipleSelection;
@property (readonly, getter=isEditable) BOOL editable;
@property (readonly) NSString *string;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } firstSelectedRange;
@property (copy) NSArray *selectedRanges;
@property (readonly, copy) NSArray *visibleCharacterRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)documentContainerView;
- (void)findMatchesForString:(id)a0 relativeToMatch:(id)a1 findOptions:(unsigned long long)a2 maxResults:(unsigned long long)a3 resultCollector:(id /* block */)a4;
- (id)firstResponderWhenDeactivated;
- (void)getSelectedText:(id /* block */)a0;
- (void)replaceMatches:(id)a0 withString:(id)a1 inSelectionOnly:(BOOL)a2 resultCollector:(id /* block */)a3;
- (void)scrollFindMatchToVisible:(id)a0;
- (void)selectFindMatch:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldReplaceCharactersInRanges:(id)a0 withStrings:(id)a1;
- (BOOL)supportsFullWordOption;
- (BOOL)supportsPatternOption;
- (id)textView;
- (id)initWithDataSource:(id)a0 reporter:(id)a1;

@end
