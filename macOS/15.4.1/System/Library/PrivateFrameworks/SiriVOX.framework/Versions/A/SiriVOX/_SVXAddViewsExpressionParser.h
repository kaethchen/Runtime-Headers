@class SVXAFSpeakableUtteranceParserProvider;

@interface _SVXAddViewsExpressionParser : _SVXExpressionParser {
    SVXAFSpeakableUtteranceParserProvider *_speakableUtteranceParserProvider;
}

@property (nonatomic) BOOL ignoresLocallyParseableExpressions;

- (void).cxx_destruct;
- (id)_parseViews:(id)a0 addViews:(id)a1 aceViewByAceId:(id)a2 aceIdByParseableExpressionIds:(id)a3;
- (id)_prepareParsingModelWithAddViews:(id)a0;
- (id)initWithParsingService:(id)a0 preferences:(id)a1;
- (void)parseAddViews:(id)a0 reply:(id /* block */)a1;

@end
