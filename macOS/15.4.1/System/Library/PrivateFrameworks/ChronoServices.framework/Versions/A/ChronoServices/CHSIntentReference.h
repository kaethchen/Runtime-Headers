@class NSData, NSString, INIntent;

@interface CHSIntentReference : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    INIntent *_inMemoryIntent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setPartialSchemaData:) NSData *_partialSchemaData;
@property (readonly, nonatomic) NSData *_intentData;
@property (readonly, nonatomic) NSData *_partialConfigData;
@property (readonly, nonatomic) BOOL _isPartial;
@property (readonly, nonatomic) BOOL _isSchemaSeparated;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) long long stableHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_schemaDataFromIntent:(id)a0 error:(id *)a1;
+ (id)referenceFromIntent:(id)a0 error:(id *)a1;
+ (id)_decodeFromOPACK:(id)a0 error:(id *)a1;
+ (id)_encodeToOPACK:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (id)_typedIntent;
- (id)initWithIntent:(id)a0 schemaData:(id)a1;
- (id)_copyFillingInSchema:(id)a0;
- (id)_copyWithoutSchemaDataIfNecessary;
- (id)_initWithGenericIntent:(id)a0 schemaData:(id)a1 error:(id *)a2;
- (id)_initWithIntentInMemoryOnly:(id)a0;
- (id)initWithIntentData:(id)a0 configData:(id)a1 schemaData:(id)a2 stableHash:(long long)a3;

@end
