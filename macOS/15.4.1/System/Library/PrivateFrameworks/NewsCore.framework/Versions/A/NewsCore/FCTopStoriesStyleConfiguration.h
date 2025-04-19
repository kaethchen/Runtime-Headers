@class NSString, FCColor, NSDictionary;

@interface FCTopStoriesStyleConfiguration : NSObject {
    NSDictionary *_configDict;
}

@property (readonly, nonatomic) int storyType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) FCColor *foreground_color;
@property (readonly, nonatomic) FCColor *dark_style_foreground_color;
@property (readonly, nonatomic) NSString *stringType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
