@class NSIndexSet, NSString;

@interface CHTokenizedResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSIndexSet *strokeIndexes;
@property (readonly, nonatomic) BOOL isMinimalDrawingResult;
@property (readonly, copy, nonatomic) NSString *topTranscription;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *recognizerDebugDescription;

+ (id)loadFromFile:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)writeToFile;
- (id)initWithIsMinimalDrawingResult:(BOOL)a0;
- (BOOL)isEqualToTokenizedResult:(id)a0;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
