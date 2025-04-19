@class NSDictionary;

@interface APJetServiceConfig : APConfiguration

@property (retain, nonatomic) NSDictionary *urlPaths;

+ (id)path;

@end
