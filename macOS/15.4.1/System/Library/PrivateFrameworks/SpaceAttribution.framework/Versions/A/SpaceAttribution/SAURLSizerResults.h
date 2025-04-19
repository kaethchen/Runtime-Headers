@class NSDictionary;

@interface SAURLSizerResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long timeNow;
@property (retain) NSDictionary *urlInfo;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addURL:(id)a0 withSizeInfo:(id)a1;

@end
