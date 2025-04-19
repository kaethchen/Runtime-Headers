@class NSString, NSXPCConnection;

@interface LACDTOMutableKVStoreReadRequest : NSObject <LACDTOKVStoreReadRequest>

@property (nonatomic) long long key;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL bypassEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
