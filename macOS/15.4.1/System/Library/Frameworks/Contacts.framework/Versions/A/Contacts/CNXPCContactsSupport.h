@class NSString, CNXPCConnection;
@protocol CNXPCContactsSupportService, CNContactsLogger;

@interface CNXPCContactsSupport : NSObject <CNXPCContactsSupportProtocol>

@property (readonly, nonatomic) CNXPCConnection *serviceConnection;
@property (readonly, nonatomic) id<CNXPCContactsSupportService> serviceProxy;
@property (readonly, nonatomic) id<CNContactsLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)os_log;
+ (id)serviceProtocolInterface;

@end
