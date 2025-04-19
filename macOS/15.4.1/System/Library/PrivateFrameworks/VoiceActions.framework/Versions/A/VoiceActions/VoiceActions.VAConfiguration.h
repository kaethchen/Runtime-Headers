@class NSString;

@interface VoiceActions.VAConfiguration : NSObject {
    void /* unknown type, empty encoding */ strideConfig;
    void /* unknown type, empty encoding */ fixedConfig;
    void /* unknown type, empty encoding */ tasrConfig;
    void /* unknown type, empty encoding */ resultGeneratorConfig;
    void /* unknown type, empty encoding */ vadModelFilename;
    void /* unknown type, empty encoding */ speechAPISpotterConfig;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
