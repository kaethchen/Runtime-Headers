@class NSString, NSLocale;

@interface ISLanguageCarouselItem : NSObject

@property (retain, nonatomic) NSString *languageIdentifier;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) id data;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLanguageIdentifier:(id)a0 data:(id)a1;
- (id)initWithLocale:(id)a0 data:(id)a1;

@end
