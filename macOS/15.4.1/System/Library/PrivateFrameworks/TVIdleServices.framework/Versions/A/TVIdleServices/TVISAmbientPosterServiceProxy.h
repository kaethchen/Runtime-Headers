@class NSString, NSXPCConnection;
@protocol TVISAmbientPosterServiceDelegate, TVISAmbientPosterServiceInterface;

@interface TVISAmbientPosterServiceProxy : NSObject <TVISAmbientPosterServiceObserverInterface, TVISAmbientPosterServiceInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<TVISAmbientPosterServiceInterface> remoteProxy;
@property (weak, nonatomic) id<TVISAmbientPosterServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
