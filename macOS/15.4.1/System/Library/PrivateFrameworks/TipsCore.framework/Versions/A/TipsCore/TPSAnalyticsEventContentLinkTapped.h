@class NSString;

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *collectionID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *clientConditionID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *displayType;
@property (readonly, nonatomic) NSString *url;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 url:(id)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 url:(id)a4 bundleID:(id)a5 context:(id)a6 displayType:(id)a7;
- (id)mutableAnalyticsEventRepresentation;

@end
