@class NSString;

@interface NSCoder : NSObject <BSXPCEncoding, BSXPCDecoding, RBSXPCEncoding, RBSXPCDecoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)CA_supportedClasses;
+ (BOOL)__categorizeException:(id)a0 intoError:(id *)a1;

- (id)ls_decodeArrayWithValuesOfClass:(Class)a0 forKey:(id)a1;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)a0 valuesOfClass:(Class)a1 forKey:(id)a2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)a0 valuesOfClasses:(id)a1 forKey:(id)a2;
- (id)ls_decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)ls_decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)ls_decodeSetWithValuesOfClass:(Class)a0 forKey:(id)a1;
- (struct CGPoint { double x0; double x1; })decodeCGPointForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeCGRectForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeCGSizeForKey:(id)a0;
- (void)encodeCGPoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (void)encodeCGSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (id)decodeStringForKey:(id)a0;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (id)decodeStringForKey:(id)a0;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)CA_decodeObjectForKey:(id)a0;
- (void)CA_encodeCGFloatArray:(const double *)a0 count:(unsigned long long)a1 forKey:(id)a2;
- (BOOL)CA_decodeCGFloatArray:(double *)a0 count:(unsigned long long)a1 forKey:(id)a2;
- (void)CA_encodeObject:(id)a0 forKey:(id)a1 conditional:(BOOL)a2;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (long long)decodingFailurePolicy;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)error;
- (void)failWithError:(id)a0;
- (id)decodeArrayOfObjectsOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeDictionaryWithKeysOfClass:(Class)a0 objectsOfClass:(Class)a1 forKey:(id)a2;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (id)decodePropertyListForKey:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeNXObject:(id)a0;
- (BOOL)__failWithExceptionName:(id)a0 errorCode:(long long)a1 format:(id)a2;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)__decoderInfoForAllowedClassesWarning;
- (void)__setError:(id)a0;
- (BOOL)_allowsValueCoding;
- (BOOL)_enforceCollectionTyping;
- (BOOL)_validateAllowedClass:(Class)a0 forKey:(id)a1 allowingInvocations:(BOOL)a2;
- (BOOL)_validateAllowedClassesContainsClass:(Class)a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 minimumLength:(unsigned long long)a1;
- (void *)decodeBytesWithMinimumLength:(unsigned long long)a0;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (float)decodeFloatForKey:(id)a0;
- (long long)decodeLongForKey:(id)a0;
- (id)decodeNXObject;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0 error:(id *)a1;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (struct CGPoint { double x0; double x1; })decodePoint;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (id)decodePropertyList;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeSize;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (id)decodeTopLevelObjectAndReturnError:(id *)a0;
- (id)decodeTopLevelObjectForKey:(id)a0 error:(id *)a1;
- (id)decodeTopLevelObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (id)decodeTopLevelObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1 size:(unsigned long long)a2;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (void)encodeBycopyObject:(id)a0;
- (void)encodeByrefObject:(id)a0;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeDataObject:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeLong:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodePropertyList:(id)a0;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (struct _NSZone { } *)objectZone;
- (BOOL)requiresSecureCoding;
- (void)setAllowedClasses:(id)a0;
- (void)setObjectZone:(struct _NSZone { } *)a0;
- (unsigned int)systemVersion;
- (BOOL)validateAllowedClass:(Class)a0 forKey:(id)a1;
- (BOOL)validateClassSupportsSecureCoding:(Class)a0;
- (long long)versionForClassName:(id)a0;

@end
