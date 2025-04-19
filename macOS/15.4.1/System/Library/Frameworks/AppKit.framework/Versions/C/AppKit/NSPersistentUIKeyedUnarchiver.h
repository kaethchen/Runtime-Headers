@class NSWindowRestorationOptions;

@interface NSPersistentUIKeyedUnarchiver : NSKeyedUnarchiver {
    NSPersistentUIKeyedUnarchiver *_secureCoder;
    NSWindowRestorationOptions *_restorationOptions;
}

- (void).cxx_destruct;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeArrayOfObjectsOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeDictionaryWithKeysOfClass:(Class)a0 objectsOfClass:(Class)a1 forKey:(id)a2;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (id)decodeTopLevelObjectForKey:(id)a0 error:(id *)a1;
- (id)decodeTopLevelObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (id)decodeTopLevelObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)finishDecoding;
- (id)_secureStateRestorationCoder;
- (id)_windowRestorationOptions;
- (id)initForReadingFromData:(id)a0 requireSecureCoding:(BOOL)a1 restorationOptions:(id)a2 error:(id *)a3;

@end
