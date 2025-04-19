@class AFPreferences;

@interface SL_AFPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPrefs;

+ (id)sharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)languageCode;

@end
