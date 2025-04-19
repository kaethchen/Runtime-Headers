@class NSString;

@interface IMPluginDataSourceStagingContext : NSObject <NSCopying>

@property (retain, nonatomic) NSString *transientIdentifier;
@property (nonatomic) BOOL isEmbeddedInTextView;

+ (id)stagingContextWithIdentifier:(id)a0 isEmbeddedInTextView:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTransientIdentifier:(id)a0 isEmbeddedInTextView:(BOOL)a1;

@end
