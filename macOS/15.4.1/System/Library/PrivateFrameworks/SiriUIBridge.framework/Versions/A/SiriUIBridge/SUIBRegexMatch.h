@class SUIBBridgedMatch;

@interface SUIBRegexMatch : NSObject

@property (readonly, nonatomic) SUIBBridgedMatch *bridgedMatch;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)captured;
- (id)initWithBridgedMatch:(id)a0;

@end
