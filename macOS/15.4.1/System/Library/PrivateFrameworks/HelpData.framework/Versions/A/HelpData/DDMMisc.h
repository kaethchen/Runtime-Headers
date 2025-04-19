@class NSURL, NSString;

@interface DDMMisc : DDMObject

@property (readonly, nonatomic) NSURL *harrierBaseURL;
@property (readonly, nonatomic) NSURL *remoteSearchIndex;
@property (readonly, nonatomic) NSURL *remoteCSSearchIndex;
@property (readonly, nonatomic) NSURL *remoteExactMatch;
@property (readonly) NSString *buildID;
@property (readonly) BOOL darkMode;

- (id)description;
- (void).cxx_destruct;
- (void)setHarrierBaseURL:(id)a0;
- (void)setRemoteCSSearchIndex:(id)a0;
- (void)setRemoteExactMatch:(id)a0;
- (void)setRemoteSearchIndex:(id)a0;

@end
