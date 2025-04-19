@class XCTCapabilities;
@protocol XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource;

@interface XCTElementQueryProcessor : NSObject

@property (retain) XCTCapabilities *remoteInterfaceCapabilities;
@property (readonly, weak) id<XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)fetchMatchesForQuery:(id)a0 clientCapabilities:(id)a1 reply:(id /* block */)a2;

@end
