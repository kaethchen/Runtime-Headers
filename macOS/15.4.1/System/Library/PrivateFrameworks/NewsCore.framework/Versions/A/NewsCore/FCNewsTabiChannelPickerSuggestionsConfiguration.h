@class FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration, FCNewsTabiChannelPickerSuggestionsUserContextConfiguration;

@interface FCNewsTabiChannelPickerSuggestionsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsUserContextConfiguration *userContextConfiguration;
@property (nonatomic) BOOL filterLocationSuggestionsOnlyToAppleNewsLocal;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
