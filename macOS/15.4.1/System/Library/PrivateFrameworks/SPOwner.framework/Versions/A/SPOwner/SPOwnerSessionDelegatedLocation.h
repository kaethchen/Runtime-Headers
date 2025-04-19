@class FMXPCSession, NSString;
@protocol SPOwnerSessionXPCProtocol;

@interface SPOwnerSessionDelegatedLocation : NSObject <SPDelegatedLocationClientXPCProtocol>

@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPOwnerSessionXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ locationUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)delegatedLocationForContext:(id)a0 completion:(id /* block */)a1;
- (void)didPublishDelegatedLocation:(id)a0;
- (void)setDelegatedLocationUpdateBlock:(id /* block */)a0;
- (void)subscribeDelegatedLocationUpdatesForContext:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeDelegatedLocationUpdatesWithCompletion:(id /* block */)a0;

@end
