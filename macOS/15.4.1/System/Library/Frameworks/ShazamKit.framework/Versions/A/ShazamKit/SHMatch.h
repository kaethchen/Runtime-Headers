@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *mediaItems;
@property (readonly) SHSignature *querySignature;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsMediaItemWithFuzzyTolerance:(id)a0;
- (id)initWithMediaItems:(id)a0 forSignature:(id)a1;

@end
