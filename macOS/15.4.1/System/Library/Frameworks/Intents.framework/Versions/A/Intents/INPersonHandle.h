@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long emergencyType;
@property (readonly) long long faceTimeType;
@property (readonly, getter=isSuggested) BOOL suggested;
@property (readonly, copy) NSString *value;
@property (readonly) long long type;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithValue:(id)a0 type:(long long)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 emergencyType:(long long)a3;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 emergencyType:(long long)a3 faceTimeType:(long long)a4 suggested:(BOOL)a5;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 emergencyType:(long long)a3 suggested:(BOOL)a4;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 faceTimeType:(long long)a3;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 suggested:(BOOL)a3;

@end
