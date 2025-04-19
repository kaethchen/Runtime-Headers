@class NSString, NSDictionary;

@interface FCTopStoriesConfiguration : NSObject <NSCopying> {
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=isPromotingEnabled) BOOL promotingEnabled;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSDictionary *styleConfigurations;
@property (readonly, nonatomic) long long storyTypeTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
