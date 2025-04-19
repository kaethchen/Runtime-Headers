@class NSString;

@interface KHExportConfiguration : NSObject

@property (nonatomic) unsigned long long format;
@property (readonly, nonatomic) NSString *formatTitle;

+ (id)configurationWithFormat:(unsigned long long)a0;

- (id)initWithFormat:(unsigned long long)a0;

@end
