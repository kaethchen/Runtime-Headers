@class NSMutableArray;
@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteUIModeler : NSObject

@property (retain) id<CNAutocompleteResultWindowDelegate> delegate;
@property (retain) NSMutableArray *model;
@property BOOL returnAutocompleteResults;

+ (id)mixedModelWithResults:(id)a0 includeAddress:(BOOL)a1 onlyEmailFormat:(BOOL)a2 delegate:(id)a3;

- (void).cxx_destruct;
- (void)addFoundInMailResults:(id)a0;
- (void)addFoundOnServersResults:(id)a0;
- (void)addNormalResults:(id)a0;
- (void)addResults:(id)a0 sectionLabel:(id)a1 includeHeader:(BOOL)a2;
- (id)initWithDelegate:(id)a0 includeAddress:(BOOL)a1 onlyEmailFormat:(BOOL)a2;
- (id)mixedModelWithResults:(id)a0;
- (id)partitionResults:(id)a0;

@end
