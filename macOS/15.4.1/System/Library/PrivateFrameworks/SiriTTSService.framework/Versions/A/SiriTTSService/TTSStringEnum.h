@class NSString;

@interface TTSStringEnum : NSObject

@property (nonatomic, readonly) long long hash;
@property (readonly, nonatomic) NSString *string;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
