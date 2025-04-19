@class NSDictionary;

@interface VUITipKitConfig : NSObject

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) long long displayFrequency;
@property (retain, nonatomic) NSDictionary *tipConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
