@class NSArray, NSWindowRestorationOptions;

@interface NSPersistentUIAggregateUnarchiver : NSCoder {
    NSArray *_unarchivers;
    NSPersistentUIAggregateUnarchiver *_secureCoder;
    NSWindowRestorationOptions *_restorationOptions;
}

- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (void)finishDecoding;
- (BOOL)requiresSecureCoding;
- (id)_secureStateRestorationCoder;
- (id)_subcoderWithValueForKey:(id)a0;
- (id)_windowRestorationOptions;
- (id)initWithUnarchivers:(id)a0 requireSecureCoding:(BOOL)a1 restorationOptions:(id)a2;

@end
