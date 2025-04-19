@class NSString, AXFTextRange;

@interface AXKSimpleStringTextProvider : NSObject <AXKTextProviding>

@property (copy, nonatomic) NSString *_content;
@property (readonly, nonatomic) AXFTextRange *contentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)substringWithRange:(id)a0;

@end
