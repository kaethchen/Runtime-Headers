@class NSArray, AVAudioSessionManager;

@interface AVAudioPlatform : NSObject {
    AVAudioSessionManager *_sessionMgr;
}

@property (readonly, nonatomic) BOOL mixStereoToMono;
@property (readonly, nonatomic) NSArray *availableCategories;
@property (readonly, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic, getter=isInputAvailable) BOOL inputAvailable;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)categoriesMatchingScope:(unsigned long long)a0;
- (BOOL)enableMixStereoToMono:(BOOL)a0 error:(id *)a1;
- (id)initWithSessionMgr:(id)a0;
- (BOOL)isCategoryValid:(id)a0;
- (BOOL)isModeValid:(id)a0;
- (id)modesMatchingScope:(unsigned long long)a0;

@end
