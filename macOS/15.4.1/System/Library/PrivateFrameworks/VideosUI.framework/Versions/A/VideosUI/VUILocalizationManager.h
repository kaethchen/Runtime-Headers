@class NSDictionary;

@interface VUILocalizationManager : NSObject

@property (retain) NSDictionary *overideLocDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;
- (id)localizedStringForKey:(id)a0 fromTable:(id)a1;
- (id)localizedStringForKey:(id)a0 withCounts:(id)a1;
- (void)updateWithJSDictionary:(id)a0;

@end
