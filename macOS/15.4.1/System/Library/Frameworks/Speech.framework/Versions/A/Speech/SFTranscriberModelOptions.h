@class NSURL, NSString, NSArray;

@interface SFTranscriberModelOptions : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, nonatomic) BOOL farField;
@property (readonly, copy, nonatomic) NSString *geoLMRegionID;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;
@property (readonly, nonatomic) BOOL atypicalSpeech;
@property (readonly, nonatomic) BOOL enableParallelLoading;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 geoLMRegionID:(id)a2 modelOverrideURL:(id)a3 speechProfileURLs:(id)a4 taskForMemoryLock:(id)a5 atypicalSpeech:(BOOL)a6 enableParallelLoading:(BOOL)a7;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4 atypicalSpeech:(BOOL)a5;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4 atypicalSpeech:(BOOL)a5 enableParallelLoading:(BOOL)a6;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 taskForMemoryLock:(id)a3 atypicalSpeech:(BOOL)a4;

@end
