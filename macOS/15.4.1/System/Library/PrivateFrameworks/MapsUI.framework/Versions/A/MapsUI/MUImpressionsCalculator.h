@class NSScrollView, NSMutableDictionary, NSUUID, NSString, MUImpressionsCalculatorConfiguration;

@interface MUImpressionsCalculator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *uiElementsByIdentifiers;
@property (readonly, weak, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (copy, nonatomic) id /* block */ observerBlock;
@property (readonly, nonatomic) NSString *debugState;
@property (readonly, nonatomic) MUImpressionsCalculatorConfiguration *configuration;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL hasImpressionElements;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)_checkVisibilityForAllItemsOnDate:(id)a0;
- (void)_checkVisibilityForElement:(id)a0 onDate:(id)a1;
- (void)_logEnterForImpressionUIElement:(id)a0 usingStartDate:(id)a1;
- (void)_logExitForImpressionUIElement:(id)a0 usingExitDate:(id)a1;
- (void)_logWorkingSetWithDidBecomeVisible:(BOOL)a0;
- (id)_uiElementForIdentifier:(id)a0;

@end
