@class NSString;

@interface GCHapticActuator : NSObject <GCJSONRepresentable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONDictionaryRepresentation:(id)a0;
- (id)initWithLabel:(id)a0 type:(long long)a1 index:(unsigned long long)a2;
- (id)jsonDictionaryRepresentation;

@end
