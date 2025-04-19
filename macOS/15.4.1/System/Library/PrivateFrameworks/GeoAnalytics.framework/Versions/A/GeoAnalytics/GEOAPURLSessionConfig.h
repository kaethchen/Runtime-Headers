@interface GEOAPURLSessionConfig : NSObject

@property (nonatomic) int type;
@property (nonatomic) int noCellAuthType;
@property (nonatomic) BOOL requireWifi;
@property (nonatomic) BOOL requirePower;
@property (nonatomic) BOOL discretionary;

+ (id)allSessionConfigTypes;
+ (id)configForURLSessionConfigType:(int)a0;

@end
