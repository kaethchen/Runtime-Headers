@interface NSVBTestedFault : NSObject {
    double _probability;
    unsigned int _tested;
    unsigned int _taken;
}

+ (id)testedFaultWithProbability:(double)a0;

- (id)description;
- (id)initWithProbability:(double)a0;

@end
