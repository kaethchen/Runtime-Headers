@interface UAIOHIDUtilities : NSObject

+ (BOOL)setBoolValue:(BOOL)a0 forProperty:(id)a1 error:(id *)a2;
+ (void *)_copyIOHIDEventSystemClientValueForProperty:(id)a0 error:(id *)a1;
+ (struct __IOHIDEventSystemClient { } *)_createIOHIDEventSystemClientWithError:(id *)a0;
+ (BOOL)_isCurrentSessionOnConsole;
+ (BOOL)_isHIDValue:(void *)a0 ofExpectedType:(unsigned long long)a1 forProperty:(id)a2 error:(id *)a3;
+ (BOOL)_setIOHIDEventSystemClientValue:(void *)a0 forProperty:(id)a1 error:(id *)a2;
+ (void)disableIOHIDEventSystemClientCache;
+ (void)enableIOHIDEventSystemClientCache;
+ (BOOL)getBoolValueForProperty:(id)a0 error:(id *)a1;
+ (id)getNumberValueForProperty:(id)a0 error:(id *)a1;
+ (BOOL)setNumberValue:(id)a0 forProperty:(id)a1 error:(id *)a2;

@end
