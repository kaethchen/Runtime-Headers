@class NSString, NSURL;

@interface FCAudioUpsellConfig : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long playPosition;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
