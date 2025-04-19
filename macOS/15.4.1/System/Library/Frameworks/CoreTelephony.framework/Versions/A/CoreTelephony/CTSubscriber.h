@class NSData, NSString;
@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject

@property (readonly, retain, nonatomic) NSData *carrierToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, getter=isSIMInserted) BOOL SIMInserted;
@property (weak, nonatomic) id<CTSubscriberDelegate> delegate;

- (void).cxx_destruct;

@end
