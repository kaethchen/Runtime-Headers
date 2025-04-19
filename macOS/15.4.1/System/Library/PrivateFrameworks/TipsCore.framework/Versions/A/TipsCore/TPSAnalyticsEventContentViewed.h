@class NSString, NSNumber;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *clientConditionID;
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *widgetType;
@property (retain, nonatomic) NSNumber *windowWidth;
@property (retain, nonatomic) NSNumber *windowHeight;
@property (retain, nonatomic) NSNumber *percentScreenWidth;
@property (retain, nonatomic) NSNumber *percentScreenHeight;
@property (retain, nonatomic) NSNumber *percentScreenArea;

+ (BOOL)supportsSecureCoding;
+ (void)setAppReferrer:(id)a0;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 viewMode:(id)a5;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4;
+ (void)incrementSessionViewNumberForKey:(id)a0;
+ (void)resetSessionViewNumber;
+ (BOOL)updateSessionViewNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)log;
- (BOOL)isWidget;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 viewMode:(id)a5;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4;
- (id)mutableAnalyticsEventRepresentation;

@end
