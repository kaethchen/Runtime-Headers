@class NSString, TVRCTimedMetadata, NSXPCConnection;
@protocol TVRCTimedMetadataUpdating;

@interface TVRCTimedMetadataManager : NSObject <TVRCTimedMetadataUpdating> {
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<TVRCTimedMetadataUpdating> proxy;
@property (readonly, nonatomic) TVRCTimedMetadata *currentTimedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateTimedMetadata:(id)a0;

@end
