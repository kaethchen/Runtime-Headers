@class NSXPCConnection;

@interface PPSFeatureFlagReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)createXPCConnection;
- (id)getFeatureFlags;

@end
