@class NSString;

@interface TPSAnalyticsEventHLPContentViewed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *topicID;
@property (readonly, nonatomic) NSString *topicTitle;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *interfaceStyle;
@property (readonly, nonatomic) NSString *externalURLString;
@property (readonly, nonatomic) NSString *fromTopicID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTopicID:(id)a0 topicTitle:(id)a1 source:(id)a2 interfaceStyle:(id)a3 fromTopicID:(id)a4 externalURLString:(id)a5;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithTopicID:(id)a0 topicTitle:(id)a1 source:(id)a2 interfaceStyle:(id)a3 fromTopicID:(id)a4 externalURLString:(id)a5;
- (id)mutableAnalyticsEventRepresentation;

@end
