@class MFEWSConnection;

@interface MFEWSNetworkTaskHandler : MCTaskHandler

@property (readonly, nonatomic) MFEWSConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEWSConnection:(id)a0;

@end
