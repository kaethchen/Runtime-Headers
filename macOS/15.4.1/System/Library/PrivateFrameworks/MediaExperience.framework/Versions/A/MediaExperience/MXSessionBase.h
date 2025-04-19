@class NSNumber, MXCoreSessionBase;

@interface MXSessionBase : NSObject

@property (retain) MXCoreSessionBase *parentCoreSession;
@property (retain) NSNumber *ID;

+ (long long)generateSessionID;
+ (id)getSetPropertiesOrder;
+ (BOOL)isNonSerializedCopyProperty:(id)a0;
+ (BOOL)isNonSerializedSetProperty:(id)a0;
+ (BOOL)isNonSerializedSetPropertyWhenSessionIsInactive:(id)a0;

- (void)dealloc;
- (id)init;
- (int)_beginInterruptionWithSecTask:(struct __SecTask { } *)a0 andFlags:(unsigned long long)a1;
- (id)_copyProperties:(id)a0 outPropertyErrors:(id *)a1;
- (int)_copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (int)_endInterruptionWithSecTask:(struct __SecTask { } *)a0 andStatus:(id)a1;
- (int)_setOrderedProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)_setProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)_setPropertyForKey:(id)a0 value:(id)a1;
- (id)copyProperties:(id)a0 outPropertyErrors:(id *)a1;
- (id)copyPropertiesInternal:(id)a0 outPropertyErrors:(id *)a1;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (int)copyPropertyForKeyInternal:(id)a0 valueOut:(id *)a1;
- (int)setOrderedProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)setOrderedPropertiesInternal:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)setProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)setPropertiesInternal:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (int)setPropertyForKeyInternal:(id)a0 value:(id)a1 fromPropertiesBatch:(id)a2;

@end
