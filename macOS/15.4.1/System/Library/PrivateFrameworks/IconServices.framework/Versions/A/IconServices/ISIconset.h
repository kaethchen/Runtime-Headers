@class NSURL, ISVariant, NSMutableDictionary;

@interface ISIconset : NSObject

@property (readonly) ISVariant *_primaryVariant;
@property (readonly) NSMutableDictionary *additionalVariants;
@property (readonly) NSURL *URL;

+ (id)iconsetWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)addResouceWithURL:(id)a0 error:(id *)a1;
- (id)icnsWithFlags:(long long)a0;
- (void)loadResources;
- (id)primaryVariantSelected:(BOOL)a0;
- (id)templateVariantSelected:(BOOL)a0;
- (BOOL)writeAsICNSToURL:(id)a0 flags:(long long)a1;
- (BOOL)writeAsICNSToURL:(id)a0 flags:(long long)a1 error:(id *)a2;

@end
