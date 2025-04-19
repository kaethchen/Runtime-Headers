@class NSString, NSArray;

@interface AMSDataMigratorOptions : NSObject

@property (copy) NSString *currentBuildVersion;
@property (readonly) NSArray *optionsArray;
@property (copy) NSString *previousBuildVersion;
@property unsigned long long scenario;

+ (id)_stringFromOptionsArray:(id)a0 atIndex:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptionsArray:(id)a0;

@end
