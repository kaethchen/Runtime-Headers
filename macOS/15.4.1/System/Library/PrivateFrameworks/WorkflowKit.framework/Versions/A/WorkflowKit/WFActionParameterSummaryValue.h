@class NSString, NSArray, NSDictionary, _NSLocalizedStringResource;

@interface WFActionParameterSummaryValue : NSObject

@property (readonly, copy, nonatomic) _NSLocalizedStringResource *summaryString;
@property (readonly, copy, nonatomic) NSString *localizedSummaryString;
@property (readonly, copy, nonatomic) NSArray *requiredVisibleParameterKeys;
@property (readonly, copy, nonatomic) NSDictionary *requiredValues;
@property (readonly, nonatomic) NSString *localizedString;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)parenthesisRegularExpression;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 summaryString:(id)a1;
- (id)initWithKey:(id)a0 localizedSummaryString:(id)a1;
- (id)matchVisibleParameterKeys:(id)a0 checkingRequiredValuesInAction:(id)a1;

@end
