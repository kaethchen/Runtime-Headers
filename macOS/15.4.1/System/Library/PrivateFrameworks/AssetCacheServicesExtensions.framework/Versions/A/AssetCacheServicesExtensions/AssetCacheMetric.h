@class NSNumber, NSDate;

@interface AssetCacheMetric : NSObject

@property (retain) NSNumber *bytesDropped;
@property (retain) NSNumber *bytesFromCacheToChild;
@property (retain) NSNumber *bytesFromCacheToClient;
@property (retain) NSNumber *bytesFromCacheToPeer;
@property (retain) NSNumber *bytesFromOriginToChild;
@property (retain) NSNumber *bytesFromOriginToClient;
@property (retain) NSNumber *bytesFromOriginToPeer;
@property (retain) NSNumber *bytesFromParentToChild;
@property (retain) NSNumber *bytesFromParentToClient;
@property (retain) NSNumber *bytesFromParentToPeer;
@property (retain) NSNumber *bytesFromPeerToChild;
@property (retain) NSNumber *bytesFromPeerToClient;
@property (retain) NSNumber *bytesImportedByHTTP;
@property (retain) NSNumber *bytesImportedByXPC;
@property (retain) NSNumber *bytesPurgedTotal;
@property (retain) NSNumber *bytesPurgedYoungerThan1Day;
@property (retain) NSNumber *bytesPurgedYoungerThan7Days;
@property (retain) NSNumber *bytesPurgedYoungerThan30Days;
@property (retain) NSDate *creationDate;
@property (retain) NSNumber *importsByHTTP;
@property (retain) NSNumber *importsByXPC;
@property (retain) NSNumber *period;
@property (retain) NSNumber *repliesFromCacheToChild;
@property (retain) NSNumber *repliesFromCacheToClient;
@property (retain) NSNumber *repliesFromCacheToPeer;
@property (retain) NSNumber *repliesFromOriginToChild;
@property (retain) NSNumber *repliesFromOriginToClient;
@property (retain) NSNumber *repliesFromOriginToPeer;
@property (retain) NSNumber *repliesFromParentToChild;
@property (retain) NSNumber *repliesFromParentToClient;
@property (retain) NSNumber *repliesFromParentToPeer;
@property (retain) NSNumber *repliesFromPeerToChild;
@property (retain) NSNumber *repliesFromPeerToClient;
@property (retain) NSNumber *requestsFromChild;
@property (retain) NSNumber *requestsFromClient;
@property (retain) NSNumber *requestsFromPeer;
@property (retain) NSNumber *requestsRejectedForNoSpace;
@property (readonly) double cachePressure;
@property (readonly) unsigned long long sumOfBytesDownloaded;
@property (readonly) unsigned long long sumOfBytesServed;
@property (readonly) unsigned long long sumOfBytesServedFromCache;
@property (readonly) unsigned long long sumOfBytesServedFromOrigin;
@property (readonly) unsigned long long sumOfBytesServedFromParent;
@property (readonly) unsigned long long sumOfBytesServedFromPeer;
@property (readonly) unsigned long long sumOfBytesServedToChild;
@property (readonly) unsigned long long sumOfBytesServedToClient;
@property (readonly) unsigned long long sumOfBytesServedToPeer;
@property (readonly) unsigned long long sumOfBytesUploaded;

- (id)description;
- (void).cxx_destruct;

@end
