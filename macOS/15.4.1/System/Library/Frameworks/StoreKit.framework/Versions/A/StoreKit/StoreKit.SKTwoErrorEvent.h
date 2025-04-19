@class NSString;

@interface StoreKit.SKTwoErrorEvent : SKBaseErrorEvent {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSString *eventName;

- (id)init;
- (id)createPayload;

@end
