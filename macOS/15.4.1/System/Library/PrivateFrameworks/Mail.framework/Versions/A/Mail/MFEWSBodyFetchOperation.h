@class NSArray, NSMutableDictionary;
@protocol MFEWSBodyFetchOperationDelegate;

@interface MFEWSBodyFetchOperation : MFEWSNetworkTaskOperation {
    NSMutableDictionary *_messagesByRemoteID;
}

@property (readonly, copy, nonatomic) NSArray *messages;
@property (weak, nonatomic) id<MFEWSBodyFetchOperationDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMessages:(id)a0;
- (id)_bodyRequestShape;
- (id)_fetchBodyDataForItemIdTypes:(id)a0;
- (id)_fetchMeetingCancellationsForItemIdStrings:(id)a0;
- (id)_fetchMeetingRequestsForItemIdStrings:(id)a0;

@end
