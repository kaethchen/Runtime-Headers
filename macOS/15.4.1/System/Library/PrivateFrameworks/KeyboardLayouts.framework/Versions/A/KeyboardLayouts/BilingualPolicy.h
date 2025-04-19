@class NSString, NSArray, NSLocale;

@interface BilingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;
@property (retain, nonatomic) NSString *primaryInputSource;
@property (retain, nonatomic) NSArray *enabledInputSources;

- (void).cxx_destruct;
- (id)initWithPrimaryLocale:(id)a0 enabledInputSources:(id)a1;
- (BOOL)isPrimaryInputSource:(id)a0;

@end
