@protocol CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStore_macOS : NSObject <CRKSharedFeatureDataStoreProviding>

@property (class, readonly, nonatomic) id<CRKFeatureDataStoreProtocol> sharedDataStore;

@end
