@class NSString;

@interface WKDOMElement : WKDOMNode

@property (readonly) NSString *tagName;

- (id)getAttribute:(id)a0;
- (void)setAttribute:(id)a0 value:(id)a1;
- (BOOL)hasAttribute:(id)a0;

@end
