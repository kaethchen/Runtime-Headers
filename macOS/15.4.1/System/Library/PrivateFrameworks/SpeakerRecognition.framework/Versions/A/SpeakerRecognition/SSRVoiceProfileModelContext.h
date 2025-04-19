@class NSURL, NSDictionary;

@interface SSRVoiceProfileModelContext : NSObject

@property (readonly, nonatomic) NSURL *configFilePath;
@property (readonly, nonatomic) NSURL *voiceProfileModelFilePath;
@property (readonly, nonatomic) NSURL *secureProfileModelFilePath;
@property (readonly, nonatomic) NSDictionary *compareModelFilePaths;

- (void).cxx_destruct;
- (id)initWithConfigFilePath:(id)a0 withModelPath:(id)a1 withCompareModelFilePaths:(id)a2;
- (id)initWithConfigFilePath:(id)a0 withModelPath:(id)a1 withModelPathExclave:(id)a2 withCompareModelFilePaths:(id)a3;

@end
