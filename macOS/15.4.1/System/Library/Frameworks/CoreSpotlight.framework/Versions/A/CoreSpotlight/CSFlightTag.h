@interface CSFlightTag : CSExternalAnalysisTag <CSCoderEncoder>

- (void)encodeWithCSCoder:(id)a0;
- (id)initWithFlight:(id)a0 synonyms:(id)a1 confidence:(double)a2;

@end
