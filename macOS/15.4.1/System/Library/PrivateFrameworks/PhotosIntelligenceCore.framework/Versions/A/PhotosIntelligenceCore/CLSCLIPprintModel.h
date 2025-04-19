@class NSString;

@interface CLSCLIPprintModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;
+ (id)encodeText:(id)a0 textEncoder:(id)a1;
+ (id)encodeTextAverage:(id)a0 textEncoder:(id)a1;
+ (long long)requiredCSUCLIPTextEncoderRevision;

- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion84;

@end
