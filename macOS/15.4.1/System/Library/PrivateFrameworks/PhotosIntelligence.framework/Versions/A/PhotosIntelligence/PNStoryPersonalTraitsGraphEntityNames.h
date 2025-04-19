@class NSDictionary;

@interface PNStoryPersonalTraitsGraphEntityNames : NSObject {
    NSDictionary *_personalTraitEntityConfiguration;
}

+ (id)_loadPersonalTraitEntityConfiguration;

- (id)init;
- (void).cxx_destruct;
- (long long)configurationVersion;
- (id)sceneNames;
- (id)dominantRequiredSceneNames;
- (id)meaningNames;

@end
