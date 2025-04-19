@class NSMutableArray, NSLocale;

@interface TESPatternMatcherLoader : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSMutableArray *matchers;

+ (id)_loadPatternMatcherForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)_loadPatternMatchers;

@end
