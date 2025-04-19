@interface ABEvent : NSObject

+ (BOOL)currentEventHasCommandKey;
+ (BOOL)currentEventHasControlKey;
+ (BOOL)currentEventHasMask:(unsigned long long)a0;
+ (BOOL)currentEventHasOptionKey;
+ (BOOL)currentEventHasShiftKey;

@end
