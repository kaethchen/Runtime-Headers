@class NSString, NSObject;

@interface VMUAnalyzerSummaryField : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long numericalValue;
@property (retain, nonatomic) NSObject *objectValue;
@property (nonatomic) int fieldType;
@property (retain, nonatomic) NSString *formattedValue;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 numericalValue:(unsigned long long)a1 objectValue:(id)a2 fieldType:(int)a3;

@end
