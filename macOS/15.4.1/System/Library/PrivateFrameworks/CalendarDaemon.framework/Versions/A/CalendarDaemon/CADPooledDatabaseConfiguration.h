@class NSString;

@interface CADPooledDatabaseConfiguration : NSObject

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) int inMemoryChangeTrackingClientID;
@property (nonatomic) BOOL enablePropertyModificationLogging;

- (void).cxx_destruct;

@end
