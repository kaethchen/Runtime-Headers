@class CHGrammar;

@interface CHLatexParser : NSObject

@property (readonly, nonatomic) CHGrammar *grammar;
@property (readonly, nonatomic) BOOL parseNormalizedLatex;

- (void).cxx_destruct;
- (id)_initializeParseTableForNormalizedLatex:(id)a0;
- (id)_initializeParseTableForPlainText:(id)a0;
- (id)_joinNumbers:(id)a0;
- (id)initWithGrammar:(id)a0 parseNormalizedLatex:(BOOL)a1;
- (id)parseLatex:(id)a0;
- (id)parseLatex:(id)a0 outCorrectedLatex:(id *)a1;

@end
