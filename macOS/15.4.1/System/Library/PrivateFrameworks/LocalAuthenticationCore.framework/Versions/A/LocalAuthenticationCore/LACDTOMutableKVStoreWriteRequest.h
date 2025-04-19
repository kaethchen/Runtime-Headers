@class NSUUID, LACDTOKVStoreValue, NSXPCConnection, NSString;

@interface LACDTOMutableKVStoreWriteRequest : NSObject <LACDTOKVStoreWriteRequest>

@property (nonatomic) long long key;
@property (retain, nonatomic) LACDTOKVStoreValue *value;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSUUID *contextUUID;
@property (nonatomic) BOOL bypassEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
