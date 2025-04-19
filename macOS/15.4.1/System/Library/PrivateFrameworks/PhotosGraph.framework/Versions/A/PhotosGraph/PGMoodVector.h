@interface PGMoodVector : NSObject <NSCopying> {
    double _vector[10];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithArray:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)normalize;
- (double)sum;
- (double)valueForMood:(unsigned long long)a0;
- (void)addMoodVector:(id)a0;
- (void)addValue:(double)a0 forMood:(unsigned long long)a1;
- (void)addValue:(double)a0 forMoods:(unsigned long long)a1;
- (void)filterWithMoods:(unsigned long long)a0;
- (id)moodArray;
- (unsigned long long)moodsWithThreshold:(double)a0;
- (void)multiplyByWeight:(double)a0;
- (void)multiplyByWeight:(double)a0 forMood:(unsigned long long)a1;
- (void)multiplyMoodVector:(id)a0;
- (void)setValue:(double)a0 forMood:(unsigned long long)a1;
- (void)substractMoodVector:(id)a0;
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)a0;

@end
