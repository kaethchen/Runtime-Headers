@class NSString, NSXPCConnection;

@interface WFCatalystHelper : NSObject <WFCatalystHelperXPCProtocol>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
