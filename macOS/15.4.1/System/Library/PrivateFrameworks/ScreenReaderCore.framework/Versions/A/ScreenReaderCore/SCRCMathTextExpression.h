@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
