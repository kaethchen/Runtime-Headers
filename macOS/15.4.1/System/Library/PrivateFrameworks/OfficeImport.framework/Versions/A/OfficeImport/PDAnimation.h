@class OITSUNoCopyDictionary, TCEnumerationMap, PDRootTimeNode;

@interface PDAnimation : NSObject {
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}

@property (class, readonly) TCEnumerationMap *entranceSubTypeMap;
@property (class, readonly) TCEnumerationMap *exitSubTypeMap;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)addRootTimeNode;
- (id)buildMap;
- (id)rootTimeNode;
- (void)setBuildMap:(id)a0;

@end
