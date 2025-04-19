@class NSSet, NSMutableDictionary, NSMutableSet, NSUUID, NSString;

@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    BOOL _shouldTransform;
    NSMutableSet *_deletedModelIDs;
    NSUUID *_homeModelID;
    long long _qualityOfService;
    NSString *_clientIdentifier;
}

@property (readonly, nonatomic) NSSet *deletedModelIDs;

- (id)description;
- (void).cxx_destruct;

@end
