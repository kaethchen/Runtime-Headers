@interface CSKStreamNativeUtilities : NSObject

+ (id)_createLossyStringForCString:(const char *)a0;
+ (id)_exclusionPredicateWithKey:(id)a0 values:(id)a1;
+ (long long)_messageTypeForEventLogType:(unsigned long long)a0;
+ (id)entityFromActivityEvent:(id)a0 usingTimeZone:(id)a1;
+ (id)entityFromActivityEventProxy:(id)a0 usingTimeZone:(id)a1;
+ (id)entityFromRecordDictionary:(id)a0 usingTimeZone:(id)a1;
+ (id)exclusionPredicateWithActivityEventProcessImagePaths:(id)a0;
+ (id)exclusionPredicateWithActivityEventSenderImagePaths:(id)a0;
+ (void)makeEntitiesFromActivityEvents:(id)a0 usingTimeZone:(id)a1 completionBlock:(id /* block */)a2;
+ (id)makeEntitiesFromSQLDatabase:(id)a0 usingTimeZone:(id)a1 completionBlock:(id /* block */)a2;
+ (id)messageFromASLObject:(struct __asl_object_s { } *)a0;
+ (long long)messageTypeForActivityEventMessageType:(unsigned char)a0;

@end
