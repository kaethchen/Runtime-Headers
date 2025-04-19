@class DIURL, FileLocalXPC;

@interface DIShadowNode : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DIURL *URL;
@property (readonly, nonatomic) BOOL isCache;
@property (readonly, nonatomic) FileLocalXPC *fileBackend;
@property (nonatomic) unsigned long long numBlocks;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)createBackendWithFlags:(int)a0;
- (id)initWithURL:(id)a0 isCache:(BOOL)a1;

@end
