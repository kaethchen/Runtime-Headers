@interface _SWHighlightEventAllowList : NSObject

+ (id)allowedClasses;
+ (Class)eventClassForType:(long long)a0;
+ (id)_eventClassToTypeMap;
+ (long long)eventTypeForClass:(Class)a0;

@end
