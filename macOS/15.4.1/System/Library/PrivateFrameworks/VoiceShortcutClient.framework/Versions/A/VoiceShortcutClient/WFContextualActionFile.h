@class NSURL, UTType;

@interface WFContextualActionFile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) UTType *type;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dispose;
- (id)initWithFileURL:(id)a0 type:(id)a1;

@end
