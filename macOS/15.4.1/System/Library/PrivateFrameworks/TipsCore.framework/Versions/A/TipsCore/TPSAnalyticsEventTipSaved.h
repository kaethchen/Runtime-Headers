@class NSString;

@interface TPSAnalyticsEventTipSaved : TPSAnalyticsEvent

@property (nonatomic) BOOL saved;
@property (retain, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *collectionID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 saved:(BOOL)a1 correlationID:(id)a2 collectionID:(id)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithTipID:(id)a0 saved:(BOOL)a1 correlationID:(id)a2 collectionID:(id)a3;
- (id)mutableAnalyticsEventRepresentation;

@end
