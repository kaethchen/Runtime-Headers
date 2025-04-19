@interface PETEventFreeValuedProperty : PETEventProperty

- (id)description;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;

@end
