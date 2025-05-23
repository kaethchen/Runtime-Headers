@class NSString, CLSSignalNode;

@interface CLSFaceModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *qualityNode;
@property (readonly) CLSSignalNode *distanceNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseFaceAnalysisVersionWithFaceAnalysisVersion:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)initWithFaceAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion1;
- (void)setupVersion12;

@end
