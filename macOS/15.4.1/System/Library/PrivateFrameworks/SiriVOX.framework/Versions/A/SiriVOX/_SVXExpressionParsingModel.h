@class NSMutableArray, NSMutableDictionary;

@interface _SVXExpressionParsingModel : NSObject

@property (retain, nonatomic) NSMutableArray *parseableExpressions;
@property (retain, nonatomic) NSMutableDictionary *aceViewIdByExpressionId;
@property (retain, nonatomic) NSMutableDictionary *aceViewByAceId;

- (void).cxx_destruct;
- (id)initWithParseableExpressions:(id)a0 aceViewIdByExpressionId:(id)a1 aceViewByAceId:(id)a2;

@end
