@interface CSLinkTag : CSExternalAnalysisTag <CSCoderEncoder>

- (void)encodeWithCSCoder:(id)a0;
- (id)initWithLink:(id)a0 synonyms:(id)a1 confidence:(double)a2;

@end
