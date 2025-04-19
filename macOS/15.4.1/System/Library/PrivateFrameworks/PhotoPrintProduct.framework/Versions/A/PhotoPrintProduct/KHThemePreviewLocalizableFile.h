@class NSString, NSBundle, NSMutableDictionary;

@interface KHThemePreviewLocalizableFile : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *localizableDictionary;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)getLocalizedKey:(id)a0;
- (id)initWithBundle:(id)a0 andIdentifier:(id)a1;
- (id)kh_localizedStringForKey:(id)a0;
- (id)kh_localizedStringForKey:(id)a0 countryCode:(id)a1;

@end
