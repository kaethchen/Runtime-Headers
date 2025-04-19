@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject

@property (readonly, nonatomic) NSURL *configFilePath;
@property (readonly, nonatomic) NSDictionary *voiceProfilesModelFilePaths;
@property (readonly, nonatomic) NSDictionary *voiceProfilesModelFilePathsExclave;

- (void).cxx_destruct;
- (id)initWithConfigFilePath:(id)a0 withModelFilePaths:(id)a1;
- (id)initWithConfigFilePath:(id)a0 withModelFilePaths:(id)a1 withModelFilePathsExclave:(id)a2;

@end
