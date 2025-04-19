@class NSLocale;

@interface LatinMultilingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;

- (void).cxx_destruct;
- (id)initWithPrimaryLocale:(id)a0;
- (BOOL)isPrimaryInputSource:(id)a0;

@end
