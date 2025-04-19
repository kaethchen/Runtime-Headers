@class NSString, NSMutableDictionary, NSBundle, SCRCUserDefaults, NSMutableArray;

@interface SCROBrailleDisplayInputManagerCacheObject : NSObject

@property (retain, nonatomic) NSString *driverIdentifier;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (nonatomic) int brailleInputMode;
@property (retain, nonatomic) NSMutableDictionary *commandDictionary;
@property (retain, nonatomic) NSMutableArray *orderedIdentifiers;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) SCRCUserDefaults *userDefaults;

- (void).cxx_destruct;

@end
