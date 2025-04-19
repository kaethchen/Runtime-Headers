@class NSURL, INFile;

@interface WFOnScreenContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) INFile *file;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 file:(id)a1;

@end
