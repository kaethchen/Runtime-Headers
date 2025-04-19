@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long supportedOptions;
@property (readonly) unsigned long long enabledOptions;
@property (readonly, copy) UNNotificationTopic *topic;
@property (readonly) unsigned long long options;

+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 options:(unsigned long long)a2;
+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 options:(unsigned long long)a4;
+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 supportedOptions:(unsigned long long)a4 enabledOptions:(unsigned long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_description;
- (id)_initWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 supportedOptions:(unsigned long long)a4 enabledOptions:(unsigned long long)a5;

@end
