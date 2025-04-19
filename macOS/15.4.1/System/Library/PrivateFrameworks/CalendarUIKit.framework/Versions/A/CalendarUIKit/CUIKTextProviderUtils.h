@interface CUIKTextProviderUtils : NSObject

+ (BOOL)designatorRequiresWhitespace;
+ (BOOL)dropLeftRedundantDesignator;
+ (BOOL)smallCapsAllowed;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;

@end
