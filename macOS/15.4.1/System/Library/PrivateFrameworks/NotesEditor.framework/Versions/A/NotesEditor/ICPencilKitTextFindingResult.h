@class PKSearchQueryItem;

@interface ICPencilKitTextFindingResult : ICTextFindingResult

@property (nonatomic) unsigned long long order;
@property (nonatomic) struct CGSize { double width; double height; } drawingSize;
@property (retain, nonatomic) PKSearchQueryItem *searchQueryItem;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (double)cornerRadius;
- (id)framesForHighlightInTextView:(id)a0;
- (void)selectInTextView:(id)a0;

@end
