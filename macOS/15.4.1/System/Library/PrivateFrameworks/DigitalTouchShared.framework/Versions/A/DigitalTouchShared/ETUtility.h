@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(BOOL)a1;
+ (BOOL)isRetailDemo;
+ (long long)lastInteractiveZoomLevel;
+ (id)removePrefixFromDestination:(id)a0;
+ (BOOL)shouldArchiveSentMessages;

@end
