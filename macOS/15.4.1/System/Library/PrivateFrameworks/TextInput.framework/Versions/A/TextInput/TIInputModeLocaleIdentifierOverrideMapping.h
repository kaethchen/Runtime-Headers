@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject

@property (readonly, nonatomic) NSDictionary *overrideMapping;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned char)localeIdentifierHasOverride:(id)a0;
- (id)overrideLocaleForIdentifier:(id)a0;

@end
