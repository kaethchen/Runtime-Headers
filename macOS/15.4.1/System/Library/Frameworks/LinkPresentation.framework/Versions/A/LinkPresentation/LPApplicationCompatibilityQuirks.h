@interface LPApplicationCompatibilityQuirks : NSObject

+ (BOOL)allowsSkinnyWidthByDefault;
+ (BOOL)needsFreshWKUserContentController;
+ (BOOL)supportsLPLinkViewAutolayout;

@end
