@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition

@property (readonly) NSURL *url;
@property (readonly) NSString *uti;
@property (nonatomic) BOOL useEmbeddedPreview;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithURL:(id)a0 UTI:(id)a1;

@end
