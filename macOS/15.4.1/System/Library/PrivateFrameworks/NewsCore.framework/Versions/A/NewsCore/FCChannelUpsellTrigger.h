@class NSString;

@interface FCChannelUpsellTrigger : NSObject

@property (nonatomic) unsigned long long triggerMethod;
@property (nonatomic) long long triggerCount;
@property (copy, nonatomic) NSString *subscriberUpsellArticleID;
@property (copy, nonatomic) NSString *nonSubscriberUpsellArticleID;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
