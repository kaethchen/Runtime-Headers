@interface CCSetDescriptor : BMResourceDescriptor

+ (id)sourceIdentifierWithValue:(id)a0 error:(id *)a1;
+ (id)accountIdentifierFromAccount:(id)a0 error:(id *)a1;
+ (id)localeIdentifierWithValue:(id)a0 error:(id *)a1;
+ (id)setDescriptorFromDescriptor:(id)a0 error:(id *)a1;
+ (id)setDescriptorsFromEncodedString:(id)a0 error:(id *)a1;
+ (id)setDescriptorsFromResourceDescriptors:(id)a0 error:(id *)a1;

@end
