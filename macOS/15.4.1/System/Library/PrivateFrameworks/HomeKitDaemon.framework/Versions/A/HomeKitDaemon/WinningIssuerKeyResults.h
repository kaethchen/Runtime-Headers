@class HAPKeychainItem;

@interface WinningIssuerKeyResults : NSObject

@property (retain) HAPKeychainItem *keychainItem;
@property long long highestGeneration;

- (void).cxx_destruct;

@end
