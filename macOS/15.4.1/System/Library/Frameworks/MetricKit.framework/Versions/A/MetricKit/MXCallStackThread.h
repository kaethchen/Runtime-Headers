@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL attributedThread;
@property (readonly) NSArray *topFrames;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithTopCallStackFrames:(id)a0 isAttributedThread:(BOOL)a1;

@end
