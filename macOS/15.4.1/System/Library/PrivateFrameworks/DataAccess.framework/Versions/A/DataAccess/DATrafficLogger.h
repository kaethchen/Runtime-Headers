@class NSString;

@interface DATrafficLogger : NSObject

@property (retain, nonatomic) NSString *filename;

+ (BOOL)enabled;

- (void).cxx_destruct;
- (id)initWithFilename:(id)a0;
- (void)logSnippet:(id)a0;
- (void)_ensureCustomLogFile;
- (void)slurpAndRemoveLookasideFile:(id)a0 prefixString:(id)a1 suffixString:(id)a2;

@end
