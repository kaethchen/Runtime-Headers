@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;
+ (id)tokenForString:(id)a0;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_string;
- (unsigned int)_identifierOfCAContext;
- (unsigned int)_identifierOfCGSConnection;
- (BOOL)_isIdentifierOfCAContext;
- (BOOL)_isIdentifierOfCGSConnection;
- (BOOL)_isString;

@end
