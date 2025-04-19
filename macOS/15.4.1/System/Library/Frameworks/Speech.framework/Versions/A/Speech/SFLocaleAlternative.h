@class NSLocale;

@interface SFLocaleAlternative : NSObject

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) double confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 confidence:(double)a1;

@end
