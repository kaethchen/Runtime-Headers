@class ABFaceTimeCommunicationsBridge, NSString;
@protocol ABCollectionItemMessagingAvailabilityHelperDelegate;

@interface ABCollectionItemMessagingAvailabilityHelper : NSObject <ABFaceTimeCommunicationsBridgeDelegate>

@property (retain, nonatomic) ABFaceTimeCommunicationsBridge *bridge;
@property (nonatomic, getter=isAvailableForMessaging) BOOL availableForMessaging;
@property (retain, nonatomic) NSString *endpoint;
@property (weak, nonatomic) id<ABCollectionItemMessagingAvailabilityHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
