@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;

+ (id)aggregateExceptionWithExceptions:(id)a0;
+ (id)validationExceptionWithFormat:(id)a0;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 osLogPack:(void *)a3 size:(unsigned long long)a4;
+ (void)raise:(id)a0 format:(id)a1;
+ (void)raise:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)exceptionRememberingObject:(id)a0 key:(id)a1;
- (id)exceptionAddingEntriesToUserInfo:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)_installStackTraceKeyIfNeeded;
- (BOOL)_isUnarchived;
- (void)_markAsUnarchived;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 osLogPack:(void *)a3 size:(unsigned long long)a4;
- (void)raise;
- (id)redactedDescription;

@end
