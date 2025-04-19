@class NSString;

@interface CHSynthesisModelHashes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *latin;

+ (id)modelHashesWithLatinHash:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateHashZhJa:(id)a0;
- (id)initWithLatinHash:(id)a0;
- (void)updateHashLatin:(id)a0;

@end
