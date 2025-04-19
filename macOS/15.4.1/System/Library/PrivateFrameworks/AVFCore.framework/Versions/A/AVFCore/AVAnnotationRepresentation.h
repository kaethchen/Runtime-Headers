@class NSUUID, NSString;

@interface AVAnnotationRepresentation : NSObject <NSCopying> {
    NSString *_representationType;
    NSString *_version;
}

@property (copy, nonatomic) NSUUID *identifier;

+ (id)_annotationRepresentationWithPropertyList:(id)a0 binaryData:(id)a1;
+ (id)_createBindingDictionaryFromMetadataItemPayload:(id)a0 error:(id *)a1;
+ (id)_createMetadataItemPayloadForData:(id)a0 identifier:(id)a1 error:(id *)a2;
+ (id)_createMetadataItemPayloadForDataBinding:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_initWithRepresentationType:(id)a0;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)_representationType;
- (void)_setRepresentationType:(id)a0;
- (void)_setVersion:(id)a0;
- (id)_version;

@end
