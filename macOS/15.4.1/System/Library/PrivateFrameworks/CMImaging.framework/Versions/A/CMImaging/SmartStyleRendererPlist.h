@class NSDictionary, SmartStyleRendererTuning;

@interface SmartStyleRendererPlist : NSObject

@property (readonly, nonatomic) NSDictionary *tuningVariants;
@property (readonly, nonatomic) SmartStyleRendererTuning *defaultTuning;

- (id)init;
- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
