@class NSMutableDictionary, NSXPCConnection;

@interface ResourceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *resourceHints;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)createResourceHint:(id)a0;
- (void)restoreResourceHints:(id)a0;
- (BOOL)updateResourceHint:(id)a0;

@end
