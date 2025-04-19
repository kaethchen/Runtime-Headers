@interface PersonalHotspotRelay : NSObject

@property (nonatomic) BOOL isReady;
@property (nonatomic) unsigned int softAPClientCount;
@property (nonatomic) unsigned int wifiNanClientCount;

+ (id)sharedInstance;

@end
