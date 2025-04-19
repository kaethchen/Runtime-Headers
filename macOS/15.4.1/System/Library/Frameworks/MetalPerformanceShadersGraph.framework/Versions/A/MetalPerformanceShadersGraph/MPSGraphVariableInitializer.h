@class NSString;

@interface MPSGraphVariableInitializer : MPSGraphObject {
    double _constant;
    double _minimum;
    double _maximum;
    NSString *_file;
    unsigned int initializerType;
}

@property (readonly, nonatomic) unsigned int initializerType;

+ (id)initializerWithConstant:(double)a0;
+ (id)initializerWithFile:(id)a0;
+ (id)initializerWithOnes;
+ (id)initializerWithRandomUniformWithMinimum:(double)a0 maximum:(double)a1;
+ (id)initializerWithZeros;

- (id)init;
- (void).cxx_destruct;
- (id)initializedDataWithNumberOfValues:(unsigned long long)a0 dataType:(unsigned int)a1;

@end
