@class NSUUID, NSString;
@protocol IDSGroupSessionKeyValueDeliveryHandler;

@interface IDSGroupSessionKeyValueDeliveryHandlerProxy : NSObject <IDSXPCGroupSessionKeyValueDeliveryDelegate>

@property (copy, nonatomic) NSUUID *handlerUUID;
@property (weak, nonatomic) id<IDSGroupSessionKeyValueDeliveryHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHandler:(id)a0;
- (void)handleGroupSessionKeyValues:(id)a0;

@end
