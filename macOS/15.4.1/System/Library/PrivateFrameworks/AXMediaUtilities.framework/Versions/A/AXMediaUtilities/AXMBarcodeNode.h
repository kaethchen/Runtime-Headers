@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)title;
+ (BOOL)isSupported;

@end
