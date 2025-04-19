@class NSData;

@interface NUVideoDataSourceDefinition : NUSingleSourceDefinition

@property (readonly) NSData *videoData;
@property (readonly) long long orientation;

- (id)init;
- (void).cxx_destruct;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithVideoData:(id)a0 orientation:(long long)a1;

@end
