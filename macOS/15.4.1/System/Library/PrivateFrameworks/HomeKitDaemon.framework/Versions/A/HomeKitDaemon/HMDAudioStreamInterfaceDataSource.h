@class NSString;

@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMFLogging, HMDAudioStreamInterfaceDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL usesGlobalMuting;
@property (getter=isMuted) BOOL muted;
@property (readonly) BOOL supportsPHASE;

+ (id)logCategory;

- (void)createPHASEEngineAndControllerForStreamToken:(long long)a0 completion:(id /* block */)a1;
- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(BOOL)a0 hostProcessBundleIdentifier:(id)a1;

@end
