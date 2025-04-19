@class NSData, NSURL;

@interface ISResourceFile : NSObject

@property (retain) NSData *resourceFileData;
@property struct OpaqueMappedResourceFileRef { } *resourceFileRef;
@property (readonly) NSURL *url;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)openFork:(unsigned long long)a0;
- (id)resourceForType:(unsigned int)a0 resID:(short)a1;
- (id)resourcesForType:(unsigned int)a0;
- (BOOL)saveWithError:(id *)a0;
- (BOOL)setResourceData:(id)a0 forType:(unsigned int)a1 resID:(short)a2;

@end
